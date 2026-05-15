#include<iostream>
using namespace std;
bool isPalindrome(int arr[], int n){
    int low = 0, high = n-1;
    while(low<=high){
        if(arr[low]!=arr[high]) return false;
        low++;
        high--;
    }
    return true;
}
int main(){
    int arr[] = {10,20,30,40,50,40,30,20,10};
    int n = sizeof(arr)/sizeof(arr[0]);

    if(isPalindrome(arr,n))cout<<"Yes"<<" ";
    else cout<<"No"<<" ";
}