class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        // define the size. 
        int n = nums.size();
        
        int count = n/3;
        
        // define the map to store the frequencies.
        unordered_map<int,int>mp;
        
        // define the answer vector. 
        vector<int>ans;
        
        for(int i = 0;i<nums.size(); i++){
            mp[nums[i]]++;
        }
        for(auto &x : mp){
            if(x.second > count){
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};