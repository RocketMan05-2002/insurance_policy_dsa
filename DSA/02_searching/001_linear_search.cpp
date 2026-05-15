#include<iostream>
using namespace std;
int linearSearch(int arr[], int n, int val){
    for(int i=0;i<n;i++){
        if(arr[i]==val) return i;
    }
    return -1;
}
int main(){
    int arr[] = {10,34,23,21,2,29,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int val;
    cin>>val;
    int index = linearSearch(arr,n,val);
    cout<<index<<" ";
    return 0;
}