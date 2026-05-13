#include<iostream>
using namespace std;

int deleteByValue(int arr[], int n, int val){
    // find the val's index
    int index = -1;
    for(int i=0;i<n;i++){
        if(arr[i]==val){
            index = i;
            break;
        }
    }
    if(index == -1) return n;
    for(int i=index;i<n;i++){
        arr[i] = arr[i+1];
    }
    return n-1;
}

int main(){
    int arr[]={1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    int val;
    cin>>val;

    for(int i=0;i<n;i++){
    	cout<<arr[i]<<"-";
    }
    cout<<endl;

    int newsize = deleteByValue(arr,n,val);

    for(int i=0;i<newsize;i++){
    	cout<<arr[i]<<"-";
    }
    return 0;
}