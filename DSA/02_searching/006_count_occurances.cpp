#include<iostream>
using namespace std;
int firstOccurance(int arr[], int n, int target){
    int low = 0, high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]>target) high = mid-1;
        else if(arr[mid]<target) low= mid+1;
        else{
            if(mid==0 || arr[mid-1]!=arr[mid]) return mid;
            else high = mid-1;
        }
    }
}
int lastOccurance(int arr[], int n, int target){
    int low = 0, high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]>target) high = mid-1;
        else if(arr[mid]<target) low= mid+1;
        else{
            if(mid==n-1 || arr[mid+1]!=arr[mid]) return mid;
            else low = mid+1;
        }
    }
}
int occurances(int arr[], int n, int target){
    int first = firstOccurance(arr,n,target);
    int last = lastOccurance(arr,n,target);
    return last-first+1;
}
int main(){
    int arr[]={10,20,20,20,20,20,30,30,40,40,40,50};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target;
    cin>>target;
    int res = occurances(arr,n,target);
    cout<<res;
    return 0;
}