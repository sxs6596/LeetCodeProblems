class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
//         define the pointers 
        int l =0;
        int r = 1;
        int n = nums.size(); 
        while(r<n){
            while(nums[l]!=nums[r]){
                l++; 
                nums[l] = nums[r]; 
            }
            r++; 
        }
        return l+1; 
    }
};