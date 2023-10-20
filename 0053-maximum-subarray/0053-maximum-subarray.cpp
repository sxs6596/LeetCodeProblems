class Solution {
public:
  int maxSubArray(vector<int>& nums) {
    
   // kandane's algorithm 
      int n = nums.size();
      int maxSum = nums[0];
      int currSum = 0;
      for(int i = 0;i<n;i++){
          currSum+=nums[i];
          
          if(currSum > maxSum){
              maxSum = currSum; 
          }
          
          if(currSum < 0){
              currSum = 0;
          }
      }
      return maxSum; 
  }
};