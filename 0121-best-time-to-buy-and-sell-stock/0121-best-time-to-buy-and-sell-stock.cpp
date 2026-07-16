class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price = INT_MAX;
        int max_profit = 0;

        for (int i = 0; i < prices.size(); i++) {
            // Track the lowest buying price seen so far
            min_price = min(min_price, prices[i]);
            
            // Calculate profit if we sold at the current price
            int current_profit = prices[i] - min_price;
            
            // Track the maximum profit found
            max_profit = max(max_profit, current_profit);
        }

        return max_profit;
    }
};
