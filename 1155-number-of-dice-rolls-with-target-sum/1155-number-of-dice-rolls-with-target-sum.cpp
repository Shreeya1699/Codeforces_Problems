class Solution {
public:
    int mod =1e9 +7;
    int numRollsToTarget(int n, int k, int target) {
        vector<vector<int>> mem(n+1,vector<int>(target+1,0));
        mem[n][target]=1;
        
        for(int diceIndex=n-1;diceIndex>=0;diceIndex--){
            for(int curSum=0;curSum <=target;curSum++){
                int ways=0;
                for(int i=1;i<= min(k,target-curSum);i++){
                    ways =(ways+mem[diceIndex+1][curSum+i]) % mod;
                }
                mem[diceIndex][curSum] =ways;
            }
        }
        return mem[0][0];
    }
};