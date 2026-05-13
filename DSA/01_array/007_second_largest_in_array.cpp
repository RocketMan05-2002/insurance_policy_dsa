#include<iostream>
using namespace std;

int largest(int arr[], int n){
    if(n==0) return -1;
    if(n==1) return arr[0];

    int max = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}

int secLargest(int arr[], int n){
    if(n<=1) return -1;
    int max  = largest(arr,n);

    int secMax = 0;
    for(int i=1;i<n;i++){
        if(arr[i]!=max && arr[i]>arr[secMax]) secMax = i;
    }

    return arr[secMax];
}

int main(){
    int arr[] = {12,98,9,45,2,23,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    int max = secLargest(arr,n);
    cout<<max;
    return 0;
}