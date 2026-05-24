// give the index of first occurance of any number in a sorted array


#include<iostream>
using namespace std;

//efficient solution 

int firstOccurance(int arr[], int n, int target){
    int low = 0, high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]>target) high = mid-1;
        else if(arr[mid]<target) low=mid+1;
        else{
            if(mid == 0 || arr[mid-1]!=arr[mid]) return mid;
            else high = mid-1;
        }
    }
}

// int firstOccurance(int arr[], int n, int target){
//     int first = -1;
//     int low = 0, high = n-1;

//     while(low<=high){
//         int mid = (low+high)/2;
//         if(arr[mid]>target) high = mid-1;
//         else if(arr[mid]<target) low = mid+1;
//         else{
//             first = mid;
//             break;
//         }
//     }

//     while(first>0 && arr[first-1]==arr[first]){
//         first--;
//     }

//     return first;
// }

int main(){
    int arr[]={10,20,20,20,20,30,30,40,40,50};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target;
    cin>>target;
    int index = firstOccurance(arr,n,target);
    cout<<index;
    return 0;
}