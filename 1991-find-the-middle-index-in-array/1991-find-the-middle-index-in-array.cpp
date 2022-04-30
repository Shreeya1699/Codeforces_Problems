class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        vector<int> psum;
        int rightSum;
        psum.push_back(0);
        for(int i = 0;i<nums.size();i++){
            psum.push_back(psum.back() + nums[i]);
        }

        for(int i=1;i<psum.size();i++){
            rightSum = psum[psum.size()-1] - psum[i];
            if(psum[i-1] == rightSum)
                return i-1;
        }
        return -1;
    }
};