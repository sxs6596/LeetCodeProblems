class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
      // define the pointers 
        int positive = 0;
        int negative = 1;
      // define the size. 
        int n = nums.size();
        // define the ans vector
        vector<int>ans(n,0); 
        for(int i = 0;i<n;i++){
            if(nums[i] > 0){
                ans[positive] = nums[i];
                positive+=2;
            }else{
                ans[negative] = nums[i];
                negative+=2;
            }
        }
        return ans; 
    }
};