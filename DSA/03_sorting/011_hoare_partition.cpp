// hoare parition uses arr[low] as a pivot traditionally .. although it could be arr[high, mid or any value]

#include<iostream>
using namespace std;
int partition(int arr[], int low, int high){
	int pivot = arr[high];
    int i = low-1, j = high+1;
    while(true){
        do{
            i++;
        }while(arr[i]<pivot);
        do{
            j--;
        }while(arr[j]>pivot);
        if(i>j) return j;
        swap(arr[i],arr[j]);
    }
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