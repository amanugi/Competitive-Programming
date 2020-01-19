#include<bits/stdc++.h>
using namespace std;

// Euclid's Algorithm -> gcd(a,b) = gcd(b,a%b)
int gcd(int a,int b){
   
    if(a<b)
        return gcd(b,a);
    
    // Base case
    if(b==0)                    // (i.e.-> if a%b==0 then return a)
        return a;
    
    return gcd(b,a%b);          // Recursive function
} 

int main()
{
	int a,b;
	cin>>a>>b;
	cout<<gcd(a,b);
	return 0;
}
