class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int lb = lower_bound(nums.begin(), nums.end(), target) - nums.begin(); 
        return lb; 
    }
};