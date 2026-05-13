// searching in array
// O(n) linear search

#include<iostream>
using namespace std;

int searchInArray(int arr[], int n, int val){
	for(int i=0;i<n;i++){
		if(arr[i]==val){
			return i;
		}
	}
	return -1;
}

int main(){
	int arr[] = {1,2,3,4,5};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	int val;
	cin>>val;
	
	int index = searchInArray(arr,n,val);
	cout<<index;
	return 0;
}