class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        
        int m = matrix.size();
        int n = matrix[0].size();
        
        int dp[m][n];
        memset(dp, 0, sizeof(dp));
        
        dp[0][0] = matrix[0][0];
        
        int max_side = (dp[0][0] == '0')? 0 : 1;
        
        for(int i=1; i<m; i++) {         
            if(matrix[i][0] == '1') {
                dp[i][0] = 1;
                max_side = 1;
            }
            else
                dp[i][0] = 0;
        }
        
        for(int j=1; j<n; j++){
            if(matrix[0][j] == '1') {
                dp[0][j] = 1;
                max_side = 1;
            }
            else
                dp[0][j] = 0;
        }
        
                
        for(int i=1; i<m; i++) {
            for(int j=1; j<n; j++) {
                
                dp[i][j] = (matrix[i][j] == '0')? 0 : min(dp[i][j-1], min(dp[i-1][j], dp[i-1][j-1])) + 1;
                max_side = max(max_side, dp[i][j]);
            }
        }
        
        return max_side*max_side;
    }
};