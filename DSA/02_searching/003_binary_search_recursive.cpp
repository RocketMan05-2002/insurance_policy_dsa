#include<iostream>
using namespace std;

int BSR(int arr[], int low, int high, int target){
    if(low>high) return -1;
    int mid = (low+high)/2;
    if(arr[mid]>target) return BSR(arr,low,mid-1,target);
    else if(arr[mid]<target) return BSR(arr,mid+1,high,target);
    else return mid;
}

int binSearchRecursive(int arr[], int n, int target){
    return BSR(arr,0,n-1,target);
}

int main(){
    int arr[]={10,20,30,40,50,60,70};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target;
    cin>>target;
   int index = binSearchRecursive(arr,n,target);
   cout<<index;
    return 0;
}