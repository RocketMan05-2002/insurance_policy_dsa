#include<iostream>
using namespace std;
int partition(int arr[], int low, int high){
	int pivot = arr[high];
	int i = -1;
	for(int j=0;j<high;j++){
		if(arr[j]<=pivot){
			i++;
			swap(arr[i],arr[j]);
		}
	}
	swap(arr[i+1],arr[high]);
	return (i+1);
}
int main(){
	int arr[]={3,8,7,6,12,10,7};
	int n = sizeof(arr)/sizeof(arr[0]);
	for(auto it:arr) cout<<it<<" ";
	cout<<endl;
	int p = partition(arr,0,n-1);
	cout<<"Parted at - "<<p<<endl;
	cout<<"After Partition"<<endl;
	for(auto it:arr) cout<<it<<" ";
	return 0;
}