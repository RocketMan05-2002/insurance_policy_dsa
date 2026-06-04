// Time: O(n + k), where k = max_element + 1
// Space: O(n + k)

#include<bits/stdc++.h>
using namespace std;
int max_element(int arr[], int n){
	if(n==1) return arr[0];
	int maxi = arr[0];
	for(int i=1;i<n;i++){
		if(arr[i]>maxi) maxi = arr[i];
	}
	return maxi;
}
void countSort(int arr[], int n){
	int maxi = max_element(arr,n);
	// int freq[maxi+1];
	vector<int>freq(maxi+1,0);
	for(int i=0;i<n;i++){
		freq[arr[i]]++;
	}
	// convert freq array to cumulative frequency
	for(int i=1;i<=maxi;i++){
		freq[i]=freq[i-1]+freq[i];
	}
	int temp[n];
	// traverse array from back
	for(int i=n-1;i>=0;i--){
		temp[--freq[arr[i]]]=arr[i];
	}
	//put temp back into array
	for(int i=0;i<n;i++){
		arr[i]=temp[i];
	}
}
int main(){
	int arr[]={1,3,2,3,4,1,6,4,3};
	int n = sizeof(arr)/sizeof(arr[0]);
	for(auto it:arr) cout<<it<<" ";
	cout<<endl;
	countSort(arr,n);
	for(auto it:arr) cout<<it<<" ";
	return 0;
}