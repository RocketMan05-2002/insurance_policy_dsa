#include<iostream>
using namespace std;

void rightByD(int arr[], int n,int D){
    if(D>n)int D = D%n;
    int temp[D];
    for(int i=0;i<D;i++) temp[i] = arr[n-D+i];
    for(int i=n-1;i>=D;i--) arr[i]=arr[i-D];
    for(int i=0;i<D;i++) arr[i]=temp[i];
}

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(auto it:arr) cout<<it<<" ";
    cout<<endl;
    int D;
    cin>>D;
    rightByD(arr,n,D);
    for(auto it:arr) cout<<it<<" ";
    return 0;
}