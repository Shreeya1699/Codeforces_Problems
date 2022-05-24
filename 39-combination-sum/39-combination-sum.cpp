class Solution {
public:
    vector<vector<int>> ans;
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<int> :: iterator it;
        it = unique(candidates.begin(),candidates.end());
        candidates.resize(distance(candidates.begin(), it));
        
        vector<int> res;
        getAllVectors(candidates, target, res,0);
        
        return ans;
    }
    
    void getAllVectors(vector<int>& candidates, int target, vector<int> &res, int i ){
        if(target == 0) 
            ans.push_back(res);
        
        while(i<candidates.size() && target - candidates[i] >=0){
            res.push_back(candidates[i]);
            getAllVectors(candidates, target - candidates[i],res, i);
            i++;
            res.pop_back();
        }
    }
};