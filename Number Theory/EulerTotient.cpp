#include<iostream>
using namespace std;

void eulerPhi(int n)
{
    int phi[n];
    for(int i=1;i<=n;i++){
        phi[i] = i;
    }
    for(int i=2;i<=n;i++){
        if(phi[i]==i){                         // means phi[i] is prime
            phi[i]=i-1;
            for(int j=2*i;j<=n;j+=i){              // checking for multiples of i
                phi[j] = (phi[j]*(i-1))/i;
            }
        }
    }
    //printing
    for(int i=1;i<=n;i++){
        cout << "Euler Totient of " <<i<<" is: "<<phi[i]<<endl;
    }
}

int main()
{
    eulerPhi(10);
}
