class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int total_sum = n*(n+1)/2;
        int actual_sum = 0;
        for(int i =0;i<nums.size();i++){
             actual_sum+=nums[i];
        }
        return total_sum-actual_sum; 
    }
};