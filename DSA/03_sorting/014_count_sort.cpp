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
	vector<int>freq(maxi+1,0); // frequency array
	for(int i=0;i<n;i++) freq[arr[i]]++;
	//build the array
	int index = 0;
	for(int i=0;i<=maxi;i++){
		while(freq[i]>0){
			arr[index] = i;
			index++;
			freq[i]--;
		}
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