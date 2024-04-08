class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int positive = 0; 
        int negative = 1; 
        vector<int>ans(nums.size()); 
        for(int i =0;i<nums.size();i++){
            if(nums[i] > 0){
                ans[positive] = nums[i];
                positive+=2; 
                
            }else if(nums[i] < 0){
                ans[negative] = nums[i];
                negative+=2; 
            }
        }
        return ans; 
    }
};