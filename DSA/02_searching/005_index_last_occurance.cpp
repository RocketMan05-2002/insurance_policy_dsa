#include<iostream>
using namespace std;

int lastOcc(int arr[], int n, int target){
    int low = 0, high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]>target)high=mid-1;
        else if(arr[mid]<target)low=mid+1;
        else{
            if(mid==n-1 || arr[mid+1]!=arr[mid]) return mid;
            else low=mid+1;
        }
    }
}

int main(){
    int arr[]={10,20,20,20,20,20,30,30,40,40,40,50};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target;
    cin>>target;
    int index = lastOcc(arr,n,target);
    cout<<index;
    return 0;
}