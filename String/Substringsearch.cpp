#include<bits/stdc++.h>
#include<cstring>
using namespace std;

// Basic Approach -> O(n^2)
int findString(char s[], char t[]) {
    
    int n = strlen(s);
    int m = strlen(t);
    
    for(int i=0;i<=n-m;i++){
        int isFound = 1;
        for(int j=0;j<m;j++){
            if(s[i+j] != t[j]){
                isFound = 0;
                break;
            }
        }
        if(isFound == 1){
            return i;
        }
    }
    return -1;

}
