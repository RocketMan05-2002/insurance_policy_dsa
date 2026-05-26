#include<bits/stdc++.h>
using namespace std;
vector<int> mergerTwoSortedArrays(int a[], int m, int b[], int n){
    vector<int> temp;
    int i = 0, j = 0;
    while(i<m && j<n){
    	if(a[i]<b[j]){
    		temp.push_back(a[i]);
    		i++;
    	}else{
    		temp.push_back(b[j]);
    		j++;
    	}
    }
    while(i<m){
    	temp.push_back(a[i]);
    	i++;
    }
    while(j<n){
    	temp.push_back(b[j]);
    	j++;
    }
    
    return temp;
}
int main(){
    int a[]={5,15,25,35,45,55,65};
    int m = sizeof(a)/sizeof(a[0]);
    int b[]={10,20,30,40};
    int n = sizeof(b)/sizeof(b[0]);
    vector<int> ans = mergerTwoSortedArrays(a,m,b,n);
    for(auto it:ans) cout<<it<<" ";
    return 0;
}