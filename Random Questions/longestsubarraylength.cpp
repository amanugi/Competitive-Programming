#include<bits/stdc++.h>
using  namespace std;

int longest_subarray(int* arr , int siz , int s){
    int right=0;
    int left=0;
    int sum=0;
    int max_length=0;

    while(right < siz){
        sum += arr[right];
        while((left < right) && (sum > s)){
            sum -= arr[left++];
        }
        if(sum == s){
            int length = right - left + 1;
            if(length > max_length){
                max_length = length;
                right++;
            }
        }
        else{
            right++;
        }
    }

    return max_length;
}

int main()
{
    int n;
    cin>>n;
    int* arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int s;
    cin>>s;
    cout<<longest_subarray(arr,n,s)<<endl;
}
