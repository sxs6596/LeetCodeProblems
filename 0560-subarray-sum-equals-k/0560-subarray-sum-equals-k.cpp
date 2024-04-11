class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
//         define the map 
        map<int,int>mp; 
        mp[0] = 1; 
        int prefixSum = 0; 
        int count = 0; 
        for(int i =0;i<nums.size();i++){
            prefixSum+=nums[i];
            int remove = prefixSum - k; 
            count+=mp[remove];
            mp[prefixSum]+=1; 
        }
        return count; 
    }
};