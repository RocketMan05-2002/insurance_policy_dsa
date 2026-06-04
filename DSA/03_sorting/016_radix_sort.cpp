#include<iostream>
using namespace std;
int max_ele(int arr[], int n){
	int maxi = arr[0];
	for(int i=0;i<n;i++){
		if(arr[i]>maxi) maxi = arr[i];
	}
	return maxi;
}
void countSort(int a[], int n, int pos){
	int count[10]={0};
	for(int i=0;i<n;i++){
		count[(a[i]/pos)%10]++;
	}
	for(int i=1;i<10;i++){
		count[i]=count[i]+count[i-1]; // cumulative freq array
	}
	int b[n];
	for(int i=n-1;i>=0;i--){
		b[--count[(a[i]/pos)%10]] = a[i];
	}
	for(int i=0;i<n;i++){
		a[i]=b[i];
	}
}
void radixSort(int arr[], int n){
	int maxi = max_ele(arr,n);
	for(int pos = 1; (maxi/pos)>0; pos*=10){
		countSort(arr,n,pos);
	}
}
int main(){
	int arr[]={432,8,530,90,88,231,11,677,199};
	int n = sizeof(arr)/sizeof(arr[0]);
	for(auto it:arr) cout<<it<<" ";
	cout<<endl;
	radixSort(arr,n);
	for(auto it:arr) cout<<it<<" ";
	return 0;
}