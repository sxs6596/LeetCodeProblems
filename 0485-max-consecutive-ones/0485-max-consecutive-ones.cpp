class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
//         define the two pointers. 
        int l = 0;
        int r = 0;
        int n = nums.size();
        int maxi = 0; 
        while(r<n){
            if(nums[r] == 1){
                r++;
            }else{
                maxi = max(maxi, r-l);
                r++; 
                l = r; 
            }
        }
        maxi = max(maxi, r-l); 
        return maxi; 
    }
};