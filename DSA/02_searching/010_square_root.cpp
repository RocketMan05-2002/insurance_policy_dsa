#include<iostream>
using namespace std;
int squareRoot(int x){
    int low = 0, high = x;
    int sq = -1;
    while(low<=high){
        int mid = (low+high)/2;
        if(mid*mid > x) high = mid-1;
        else if(mid*mid < x){
        	sq = mid;
            low = mid+1;
        }
        else{
            sq = mid;
            break;
        }
    }
    return sq;
}
int main(){
    int x;
    cin>>x;
    int ans = squareRoot(x);
    cout<<ans;
    return 0;
}