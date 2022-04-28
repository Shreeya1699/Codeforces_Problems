class Solution {
public:
    bool isPalindrome(int x) {
       string res = to_string(x);
        for(int i=0;i<res.size();i++){
            if(res[i]!=res[res.size()-i-1])
                return false;
        }
        return true;
    }
};