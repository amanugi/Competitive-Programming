#include <bits/stdc++.h>
using namespace std;

int max_subarray(int* arr , int n){
    if(n == 0)
        return INT_MIN;
        
    if(n == 1){
        return arr[0];
    }
    
    int* dp = new int[n];
    int best_sum = arr[0];
    
    dp[0] = arr[0];
    for(int i=1;i<n;i++){
        dp[i] = max(dp[i-1] + arr[i] , arr[i]);
        if(dp[i] > best_sum){
            best_sum = dp[i];
        }
    }
    return best_sum;
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int* arr = new int[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    cout<<max_subarray(arr,n)<<endl;
	}
	return 0;
}
