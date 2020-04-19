 int minMoves(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int n = nums.size();
        long long ans = 0;
        int mid = nums[n/2];
        
       for(int i=0;i<n;i++){
           ans += abs(nums[i] - mid);
       } 
        if(n % 2 == 0){
            long long ans2 = 0;
            int mid = (nums[n-1])/2;
            
            for(int i=0;i<nums.size();i++){
                ans2 += abs(nums[i] - mid);
            }
            ans = min(ans,ans2);
        }
        return ans;
    }
    
    int main(){
      int n;
      cin>>n;
      vector<int> nums(n);
      for(int i=0;i<n;i++){
        cin>>nums[i];
      }
      cout<<minMoves(nums)<<endl;
    }
