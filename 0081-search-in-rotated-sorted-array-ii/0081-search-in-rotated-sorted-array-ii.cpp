class Solution {
public:
    bool search(vector<int>& nums, int target) {
        // define the pointers. 
        int low = 0 ;
        int high = nums.size()-1;
        while(low <= high){
            // calculate the mid 
            int mid = (low)+(high-low)/2; 
            if(nums[mid] == target){
                return true; 
            }
            if(nums[mid] == nums[low] && nums[high] == nums[mid]){
                low = low+1;
                high = high-1;
                continue; 
            }
            // check the left half is sorted or not. 
            if(nums[mid] >= nums[low]){
                
                if(nums[low]<=target && target<=nums[mid]){
                    high = mid-1;
                }else{
                    low = mid+1; 
                }
                
            }else{
                if(nums[mid]<=target && target<=nums[high]){
                    low = mid+1;
                }else{
                    high = mid-1; 
                }
            }
        }
        return false; 
    }
};