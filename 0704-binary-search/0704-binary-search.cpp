class Solution {
public:
    int bSearch(vector<int>&nums, int low, int high, int target){
        // base case 
        if(low > high){
            return -1;
        }
        int mid = (low + high)/2; 
        if(nums[mid] == target){
            return mid; 
        }else if (nums[mid] < target){
            return bSearch(nums, mid+1, high, target);
        }else{
            return bSearch(nums, low, mid-1, target); 
        }
    }
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size()-1;
        int result = bSearch(nums, low, high, target);
        return result;
    }
};