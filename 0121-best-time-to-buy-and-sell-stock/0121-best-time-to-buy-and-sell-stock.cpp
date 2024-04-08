class Solution {
public:
    int maxProfit(vector<int>& prices) {
//         define the min_price, max_price 
        int min_price = INT_MAX; 
        int max_price = 0; 
        for(int i =0;i<prices.size();i++){
            min_price = min(min_price, prices[i]);
            max_price = max(max_price, prices[i]-min_price); 
        }
        return max_price; 
    }
};