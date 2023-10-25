class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // define the size. 
        int n = prices.size();
        //define the variables 
        int profit = 0; 
        int minimum = prices[0];
        for(int i = 1;i<n;i++){
            int cost = prices[i] - minimum;
            profit = max(profit, cost); 
            minimum = min(minimum, prices[i]);
        }
        return profit;
    }
};