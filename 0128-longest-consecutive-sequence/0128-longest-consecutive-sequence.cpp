class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size(); 
        if(n ==0){
            return 0; 
        }
//         sort the vector 
        sort(nums.begin(), nums.end());
//         define the pointers 
        int currentLength = 1; 
        int maxLen = 0; 
        for(int i =1;i<n;i++){
            if(nums[i] != nums[i-1]){
                if(nums[i] == nums[i-1]+1){
                    currentLength++; 
                }else{
                    maxLen = max(maxLen, currentLength); 
                    currentLength = 1; 
                }
            }
        }
        return max(maxLen, currentLength); 
    }
};