class Solution {
public:
    double myPow(double x, int n) {
        if(x==0) return 0;
        if(x==1) return 1;
        
        long long int _n = n;
        double ans =1;
        if(n<0)
            _n= _n*(-1);
        while(_n){
             if(_n&1){
                ans =ans*x;
                _n--;
             }
             else {
                x = x*x;                
                _n /=2;
             }
        }
        if(n<0)
            ans = (double)1/(double)ans;
        return ans;
       
        
    }
};