class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int>mp;
        int single_element = -1;
        for(int element : nums){
             mp[element]++;
        }
        for(auto it : mp){
            if(it.second == 1){
                single_element = it.first; 
            }
        }
        return single_element;
    }
};