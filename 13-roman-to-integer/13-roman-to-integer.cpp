class Solution {
public:
    int romanToInt(string s) {
        int res =0;
        for(int i=0;i< s.size() ;i++){
            if(s[i]=='M')
                res += 1000;
            if(s[i]=='D')
                res += 500;
            if(s[i] == 'C' && i<s.size() && s[i+1] != 'D' && s[i+1] != 'M')
                res += 100;
            if(s[i]=='C' && i<s.size() && (s[i+1] =='D' || s[i+1]=='M'))
                res -= 100;
            if(s[i]== 'L')
                res += 50;
            if(s[i] == 'X' && i<s.size() && s[i+1] != 'L' && s[i+1] != 'C')
                res += 10;
            if(s[i]=='X' && i<s.size() && (s[i+1] =='L' || s[i+1]=='C'))
                res -=10;
            if(s[i] == 'V')
                res += 5;
            if(s[i] == 'I' && i<s.size() && s[i+1] != 'V' & s[i+1] != 'X')
                res += 1;
            if(s[i]=='I' && i<s.size() && (s[i+1] =='V' || s[i+1]=='X'))
                res -=1;
        }
        
        return res;
        
    }
};