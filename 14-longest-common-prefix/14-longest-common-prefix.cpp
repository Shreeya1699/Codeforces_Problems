class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int j= 0;
        while(j<strs[0].size()){
        for(int i=0; i< strs.size() ;i++){
            char match = strs[0][j];
            if(j==strs[i].size() || match != strs[i][j])
                    return strs[0].substr(0,j);
            
        }
        j++;
        }
        return strs[0].substr(0,j);
    }
};