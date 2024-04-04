class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()) return 0; 
        // define the pointers 
        int l = 0;
        int r =1; 
        while(r<nums.size()){
            while(nums[l]!=nums[r]){
                l = l+1; 
                nums[l] = nums[r]; 
            }
            r++; 
        }
        return l+1; 
    }
};