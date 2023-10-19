class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // define the size. 
        int n = nums.size();
        // define the hashmap. 
        unordered_map<int,int>mp;
        
        // define the ans vector 
        vector<int>ans; 
        for(int i = 0;i<n;i++){
            int need = target - nums[i];
            auto it = mp.find(need);
            if(it != mp.end()){
                ans.push_back(it->second);
                ans.push_back(i);
                return ans; 
            }else{
                mp[nums[i]] = i; 
            }
        }
        return ans;
    }
};