#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int make_Seive(int n){
    
    bool isPrime[n+1];
    for(int i=0;i<=n;i++){
        isPrime[i] = true;
    }
    isPrime[0] = false;
    isPrime[1] = false;
    
    for(int i=2;i<=sqrt(n);i++){
        if(isPrime[i] == true){
            for(int j=i*i;j<=n;j+=i){            // making all multiples notprime
                isPrime[j] = false;
            }
        }
    }
    
    int count=0;
    for(int i=0;i<=n;i++){
        if(isPrime[i]==true)
            count++;
    }
    return count;
}

int main()
{
    int n;
    cin>>n;
    
    int no_of_Primes = make_Seive(n);
    
    cout << no_of_Primes << endl;
}
