class Solution {
public:
    // with memoization 
    int robHelper(int n, vector<int>&nums, vector<int>&dp){
//         base case 
        
        if(n == 0){
            return nums[0];
        }
        
        if(n < 0 ) return 0; 
        if(dp[n]!=-1)return dp[n]; 
        
        
//         pick & dont pick 
        int pick = robHelper( n-2, nums, dp) + nums[n]; 
        int dontpick = robHelper(n-1, nums, dp) + 0; 
        
        return dp[n]=max(pick , dontpick); 
    }
    int rob(vector<int>& nums) {
        int n = nums.size(); 
        vector<int>dp(n+1,-1); 
        return robHelper(n-1,nums, dp); 
    }
};