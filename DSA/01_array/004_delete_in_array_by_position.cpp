#include<iostream>
using namespace std;

int deleteByPosition(int arr[], int n, int position){
    for(int i=position-1; i<n-1 ;i++){
        arr[i] = arr[i+1];
    }
    return n-1;
}

int main(){
    int arr[]={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<n;i++){
    	cout<<arr[i]<<"-";
    }
    cout<<endl;

    int position = 2;
    int newsize = deleteByPosition(arr,n,position);

    for(int i=0;i<newsize;i++){
    	cout<<arr[i]<<"-";
    }
    return 0;
}