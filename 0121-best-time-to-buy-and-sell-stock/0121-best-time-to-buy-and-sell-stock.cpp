class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int max_profit = 0;
        int curr_profit;
        int min_price = INT_MAX;

        for (int i = 0; i < n; i++) {
            min_price = min(min_price,prices[i]);
            curr_profit = prices[i] - min_price;
            max_profit = max(max_profit , curr_profit);
        }
        return max_profit;
    }
};