#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll gcd(int a,int b){
    
    if(a<b)
        return gcd(b,a);
    
    if(b==0)
        return a;
    
    return gcd(b,a%b);
}

void func(long long n)
{
   ll sum=0;
   for(int i=1;i<=n;i++){
    ll ans = gcd(i,n);
    ll lcm = (i*n)/ans;              // Multiplying the no's and dividing it by it's gcd will give lcm 
    sum = sum+lcm;
   }
   cout<<sum<<endl;
}
