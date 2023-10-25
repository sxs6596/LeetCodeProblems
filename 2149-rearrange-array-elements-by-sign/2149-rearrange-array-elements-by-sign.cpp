class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
       // bruteforce
        vector<int>positive; 
        vector<int>negative;
        for(int i =0;i<nums.size();i++){
            if(nums[i] > 0){
                positive.push_back(nums[i]);
            }else{
                negative.push_back(nums[i]);
            }
        }
        for(int i =0;i<nums.size()/2;i++){
            nums[2*i] = positive[i];
            nums[2*i+1] = negative[i];
        }
        return nums;
    }
};