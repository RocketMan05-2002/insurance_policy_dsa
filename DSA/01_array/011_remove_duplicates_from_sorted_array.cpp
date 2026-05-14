#include<iostream>
using namespace std;

int removeDuplicatesFromSortedArray(int arr[], int n){
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i]!= arr[count]){
            count++;
            swap(arr[i],arr[count]);
        }
    }
    return count+1;
}

int main(){
    int arr[] = {1,2,2,2,3,3,3,3,3,4,5,5,5,5,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int newsize = removeDuplicatesFromSortedArray(arr,n);

    for(int i=0;i<newsize;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}