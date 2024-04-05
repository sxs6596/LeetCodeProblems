class Solution {
public:
    int majorityElement(vector<int>& nums) {
//         we store the elements in the map 
        int n = nums.size(); 
        int majorityElement = -1; 
        map<int,int>mp;
        for(int i =0;i<nums.size();i++){
            mp[nums[i]]++; 
        }
        for(auto it : mp){
            if(it.second > n/2){
                majorityElement = it.first; 
            }
        }
        return majorityElement; 
    }
};