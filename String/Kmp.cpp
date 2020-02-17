#include<bits/stdc++.h>
#include<cstring>
using namespace std;

// S and T - input strings
// You need to check if string T is present in S or not


// KMP method -> O(n)
int* getLps(char pattern[]){             // Longest Prefix which is also a suffix
    
    int len = strlen(pattern);
    int* lps = new int[len];
    
    lps[0]=0;
    int i=1;
    int j=0;
    
    while(i<len){
        if(pattern[i] == pattern[j]){
            lps[i] = j+1;
            i++;
            j++;
        }
        else{
            if(j!=0)
                j = lps[j-1];
            else{
                lps[i]=0;
                i++;
            }
        }
    }
    return lps;
}

int findString(char s[], char t[]){
    int slen = strlen(s);              // length of string
    int tlen = strlen(t);              // length of substring
    
    int i=0;
    int j=0;
    
    int flag=0;
    int* lps = getLps(t);
    int index=0;
    while(i<slen && j<tlen){
        if(s[i] == t[j]){
            i++;
            j++;
        }
        else{
            if(j!=0){
                j = lps[j-1];
            }
            else{
                i++;
            }
        }
        if(j == tlen){
            flag=1;
           index = i-tlen;
           break;
         }
    }
    if(flag==1)
        return index;
    else{
        return -1;
    }
}
