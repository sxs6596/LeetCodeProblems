class Solution {
public:
    int uniquePathsDP(int i, int j, vector<vector<int>>&dp){
        // base case 
        if(i==0 && j==0){
            return 1; 
        }
        if(i<0  || j<0 ){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int up = uniquePathsDP(i-1, j, dp);
        int left = uniquePathsDP(i, j-1, dp);
        return dp[i][j]= up + left; 
    }
    int uniquePaths(int m, int n) {
     vector<vector<int>>dp(m,vector<int>(n,-1)); 
     return uniquePathsDP(m-1,n-1, dp); 
    }
};