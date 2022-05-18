class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        while(s[i]==32)
            i++;
        int n=0,sign=1,a=0;
        for(;i<s.size();i++){
            if(s[i]>=65 && s[i]<=90)
                break;
            if(s[i]>=97 && s[i]<=122)
                break;
            if(s[i]=='.' || s[i]==' ')
                break;
            if(s[i]=='-'){
                if(a==1)
                    break;
                else{
                    sign=-1;
                    a=1;
                }
            }
            else if(s[i]=='+'){
                if(a==1)
                    break;
                else
                    a=1;
            }
            if(s[i]>=48 && s[i]<=57){
                a=1;
                if(n>INT_MAX || n>INT_MAX/10 || n>((INT_MAX-s[i])+48)/10){
                    if(sign==-1)
                        return INT_MIN;
                    else 
                        return INT_MAX;
                }
                else if(n<INT_MIN || n<INT_MIN/10 || n<((INT_MIN+s[i])-48)/10)
                    return INT_MIN;
                n=n*10+(s[i]-48);
            }
        }
        return n*sign;
    }
};