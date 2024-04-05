class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if(nums.size() ==0)return 0; 
        sort(nums.begin(), nums.end());
        stack<int>st; 
        
        for(int i =0;i<nums.size();i++){
            if(st.empty() || st.top() != nums[i]){
                st.push(nums[i]);
            }else{
                if(!st.empty()){
                    st.pop(); 
                }
            }
        }
        if(!st.empty()){
            return st.top(); 
        }else{
            return 0; 
        }
    }
};