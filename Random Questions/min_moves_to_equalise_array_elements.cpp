 int minMoves(vector<int>& nums) {
        int ans = 0;
        int target = *min_element(nums.begin() , nums.end());
        for(int i=0;i<nums.size();i++){
            res += nums[i] - target;
        }
        return ans;
    }
