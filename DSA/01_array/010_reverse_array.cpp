#include<iostream>
using namespace std;

void reverseArray(int arr[], int n){
    int low = 0, high = n-1;
    while(low<=high){
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(auto it:arr) cout<<it<<" ";
    cout<<endl;

    reverseArray(arr,n);

    for(auto it:arr) cout<<it<<" ";
    return 0;
}