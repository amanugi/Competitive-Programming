#include <bits/stdc++.h>
#include <set>
using namespace std;

int missing_positive_no(int* arr , int n){
   set<int> s;
   for(int i=0;i<n;i++){
    if(arr[i] > 0){
        s.insert(arr[i]);
    }
   }

   for(int i=1;i<=n;i++){
    if(s.find(i) == s.end()){
        return i;
    }
   }
   return n+1;
}
int main(){
    int n;
    cin>>n;
    int* arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<missing_positive_no(arr , n)<<endl;
}
