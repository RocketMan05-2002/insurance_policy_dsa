#include<iostream>
using namespace std;
#include<iostream>
using namespace std;

int maxLen(int arr[], int n){
    int length = 1;
    int maxlength = 1;
    for(int i = 1; i < n; i++){
        // if current element is same as previous
        if(arr[i] == arr[i-1]) length++;
        else length = 1;
        maxlength = max(maxlength, length);
    }
    return maxlength;
}
int main(){
    int arr[]={10,20,20,20,30,30,30,30,40,40,40,40,40};
    int n = sizeof(arr)/sizeof(arr[0]);
    int res = maxLen(arr,n);
    cout<<res;
    return 0;
}