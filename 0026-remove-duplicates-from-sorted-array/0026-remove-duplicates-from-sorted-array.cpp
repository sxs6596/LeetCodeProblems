class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>s(nums.begin(), nums.end()); 
        int index = 0; 
        for(auto it : s){
            nums[index++] = it; 
        }
        return index; 
    }
};