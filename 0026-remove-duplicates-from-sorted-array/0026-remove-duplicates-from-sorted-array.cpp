class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
//      brute force 
        set<int>s(nums.begin(), nums.end()); 
        int index = 0; 
        for(auto it : s){
            nums[index] = it; 
            index++; 
        }
        return index;
    }
};