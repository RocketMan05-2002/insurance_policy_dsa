#include<iostream>
using namespace std;

int partition(int arr[], int low, int high){
    int pivot = arr[high];
    int i = low-1;
    for(int j=low;j<high;j++){
        if(arr[j]<=pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return i+1;
}

void qS(int arr[], int low, int high){
    if(low<=high){
        int p = partition(arr,low,high);
        qS(arr,low,p-1);
        qS(arr,p+1, high);
    }
}

void quickSort(int arr[], int n){
    qS(arr,0,n-1);
}

int main(){
    int a[]={5,3,8,4,2,7,1,10};
    int n=sizeof(a)/sizeof(a[0]);

    for(auto it:a) cout<<it<<" ";
    cout<<endl;
    quickSort(a,n);
    for(auto it:a) cout<<it<<" ";
    return 0;
}