#include<bits/stdc++.h>
using namespace std;
//hoare partition
int partition(int arr[], int low, int high){
	int pivot = arr[low];
	int i = low-1, j = high+1;
	while(true){
		do{
			i++;
		}while(arr[i]<pivot);
		do{
			j--;
		}while(arr[j]>pivot);
		if(i>=j) return j;
		swap(arr[i],arr[j]);
	}
}
void qS(int arr[], int low, int high){
	if(low<high){
		int p = partition(arr,low,high);
		qS(arr,low,p);
		qS(arr,p+1,high);
	}
}
void quickSort(int arr[], int n){
	qS(arr,0,n-1);
}
int main(){
	int arr[] = {5,3,8,4,2,7,1,10};
	int n = sizeof(arr)/sizeof(arr[0]);
	for(auto it:arr) cout<<it<<" ";
	cout<<endl;
	quickSort(arr,n);
	for(auto it:arr) cout<<it<<" ";
	return 0;
}