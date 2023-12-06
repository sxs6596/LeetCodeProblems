class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
     // define the size 
        int n = nums.size(); 
     // find the lower bound 
        int lb = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
     // find the upper bound 
        int ub = upper_bound(nums.begin(), nums.end(), target) - nums.begin(); 
        
        if(lb == n || nums[lb]!=target){
            return {-1,-1}; 
        }
        else if(nums[lb] == target){
            return {lb, ub-1}; 
        }
        return {-1,-1}; 
     }
};