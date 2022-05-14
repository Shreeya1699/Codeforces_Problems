class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> difference;
        vector<int> ans;
        int diff;
        for(int i = 0;i<nums.size();i++){
            diff = target - nums[i];
            if(difference.find(diff) == difference.end()){
                difference[nums[i]] = i;
            }
            else {
                 ans.push_back(difference[diff]);
                 ans.push_back(i);
            }
        }
        return ans;
        
    }
};