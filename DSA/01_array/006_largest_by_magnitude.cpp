#include<iostream>
using namespace std;

int largestByMagnitude(int arr[], int n){
    int maxInd = 0;
    for(int i=1;i<n;i++){
        if(abs(arr[maxInd])<abs(arr[i])){
            maxInd = i;
        }
    }
    return arr[maxInd];
}

int main(){
    int arr[]={-1,998,-999,43,765,-876};
    int n = sizeof(arr)/sizeof(arr[0]);

    int num = largestByMagnitude(arr,n);
    cout<<num;
    return 0;
}