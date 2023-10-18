class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        // define the size 
        int n = nums.size();
        // define the pointers 
        int L = 0;
        int R = 0; 
        // define the maxLen 
        int maxLen = 0;
        while(R <n){
            if(nums[R] !=1){
                maxLen = max(maxLen, R-L);
                L = R+1;
            }
            R++;
        }
        return max(maxLen, R-L);
    }
};