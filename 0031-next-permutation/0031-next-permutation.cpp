// Longest Prefix
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
//       find the index or the break point 
        int n = nums.size(); 
        int index = -1; 
        for(int i = n-2 ;i>=0;i--){
            if(nums[i] < nums[i+1]){
                index = i; 
                break; 
            }
        }
//         no permuation case 
        if(index == -1){
            reverse(nums.begin(), nums.end());
            return; 
        }
//         swap with the smallest index after 
        for(int i= n-1;i>=0;i--){
            if(nums[i] > nums[index]){
                swap(nums[i], nums[index]);
                break; 
            }
        }
//         sort from the index + 1 position to the end.
        sort(nums.begin()+index+1, nums.end()); 
    }
};