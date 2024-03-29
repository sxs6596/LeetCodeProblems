class Solution {
public:
    int robDP(int n, vector<int>& nums, vector<int>& dp) {
        if (n < 0) {
            return 0;
        }
        if (n == 0) {
            return nums[0];
        }
        if (dp[n] != -1) {
            return dp[n];
        }
        
        int pick = nums[n] + (n > 1 ? robDP(n - 2, nums, dp) : 0);
        int not_pick = robDP(n - 1, nums, dp);
        
        return dp[n] = max(pick, not_pick);
    }
    
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return nums[0]; // If there's only one house, return its value
        
        vector<int> temp1, temp2;
        for (int i = 0; i < n; i++) {
            if (i != 0) temp1.push_back(nums[i]);
            if (i != n - 1) temp2.push_back(nums[i]);
        }
        
        vector<int> dp1(temp1.size(), -1);
        vector<int> dp2(temp2.size(), -1);
        
        int ans1 = robDP(temp1.size() - 1, temp1, dp1);
        int ans2 = robDP(temp2.size() - 1, temp2, dp2);
        
        return max(ans1, ans2);
    }
};
