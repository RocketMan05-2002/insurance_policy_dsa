#include<iostream>
using namespace std;
int binarySearch(int arr[], int n, int target){
    int low = 0, high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]>target) high = mid-1;
        else if(arr[mid]<target) low = mid+1;
        else{
            return mid;
        }
    }
    return -1;
}
int main(){
    int arr[] = {12,23,34,45,56,67,78,89,90};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target;
    cin>>target;
    int index = binarySearch(arr,n,target);
    cout<<index;
    return 0;
}