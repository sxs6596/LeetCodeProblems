class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int val = 0 ; 
        int n = nums.size(); 
        for(int i =0;i<n;i++){
            val = val^nums[i];
        }
        return val;
    }
};