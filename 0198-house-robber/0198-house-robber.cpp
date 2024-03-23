class Solution {
public:
    int robDP(int index, vector<int>&nums, vector<int>&dp){
        // base case 
        if(index == 0) return nums[0];
        if(index < 0) return 0; 
        if(dp[index]!=-1){
            return dp[index]; 
        }
        int pick = nums[index] + robDP(index-2, nums, dp);
        int notpick = 0 + robDP(index-1, nums, dp); 
        return dp[index] = max(pick, notpick);
        
    }
    int rob(vector<int>& nums) {
        int index = nums.size();
        vector<int>dp(index+1, -1);
        int ans = robDP(index-1, nums, dp); 
        return ans; 
    }
};