#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll dp[72];

// Recursive Approach
/*
int staircase(int n){
    if(n==0){
        return  1;
    }
    if(n==1){
        return 1;
    }
    if(n==2){
        return 2;
    }
    if(dp[n]!=0){
        return dp[n];
    }
    ll answer = staircase(n-1)+staircase(n-2)+staircase(n-3);
    dp[n] = answer;
    return answer;
} */

// Iterative Approach
ll staircase(int n){
    ll *output = new ll[n+1];
    output[0]=1;
    output[1]=1;
    output[2]=2;
    for(int i=3;i<=n;i++){
         output[i] = output[i-1]+output[i-2]+output[i-3];
        //output[i] = output[i]+add;
    }
    ll  answer = output[n];
    delete [] output;
    return answer;
    
} 

int main(){

  int n; 
  cin >> n ;
  cout << staircase(n) << endl;

}
