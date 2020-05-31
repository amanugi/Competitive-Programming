 vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        
        vector<int> indices;
        
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i] + nums[j] == target){
                    indices.push_back(i);
                    indices.push_back(j);
                }
            }
        }
        return indices;
    }
