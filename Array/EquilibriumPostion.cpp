#include <bits/stdc++.h>
using namespace std;

// Time Complexity -> O(n)
int Equilibrium_Point(int* arr , int n){
    //rightsum as totalsum
    int rightsum = 0;
    int leftsum = 0;
    
    for(int i=0;i<n;i++){
        rightsum += arr[i];
    }
    for(int i=0;i<n;i++){
        rightsum -= arr[i];
        if(leftsum == rightsum){
            return i+1;
        }
        
        leftsum += arr[i];
    }
    
   return -1;
}





// Time Complexity -> O(n^2)
// int Equilibrium_Point(int* arr,int n){
//     for(int i=0;i<n;i++){
        
//         int leftsum=0;
//         for(int j=0;j<i;j++){
//             leftsum += arr[j];
//         }
        
//         int rightsum=0;
//         for(int j=i+1;j<n;j++){
//             rightsum += arr[j];
//         }
        
//         if(leftsum == rightsum){
//             return i+1;
//         }
//     }
//     return -1;
// }

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
	    
	    cout<<Equilibrium_Point(arr,n)<<endl;
	}
	return 0;
}
