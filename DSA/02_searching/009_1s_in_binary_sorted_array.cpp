#include<iostream>
using namespace std;
int firstOccurance(int arr[], int n, int target){
    int low = 0, high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]<target) low = mid+1;
        else if(arr[mid]>target) high = mid-1;
        else{
            if(mid == 0 || arr[mid-1]!=arr[mid]) return mid;
            else high = mid-1;
        }
    }
    return -1;
}
int count1sinsortedarray(int arr[], int n){
    int first = firstOccurance(arr,n,1);
    return n-first;
}
int main(){
    int arr[]={0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    int ones = count1sinsortedarray(arr,n);
    cout<<ones;
    return 0;
}