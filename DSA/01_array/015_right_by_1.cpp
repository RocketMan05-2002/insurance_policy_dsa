#include<iostream>
using namespace std;

void rightBy1(int arr[], int n){
    int D = D%n;
    int temp = arr[n-1];
    for(int i=n-2;i>=0;i--) arr[i+1]=arr[i];
    arr[0]=temp;
}

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(auto it:arr) cout<<it<<" ";
    cout<<endl;
    rightBy1(arr,n);
    for(auto it:arr) cout<<it<<" ";
    return 0;
}