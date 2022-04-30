class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxInd = 0;
        if(nums.size()==1)
            return 0;
        
        for(int i=0; i<nums.size() ;i++){
            if(nums[i]>nums[maxInd])
                maxInd = i;
        }
        
        for(int i=0;i<nums.size();i++){
            if(i != maxInd && nums[maxInd]< 2*nums[i])
                return -1;
        }
        return maxInd;
        
        
    }
};