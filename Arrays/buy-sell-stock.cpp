// Problem : https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() < 2)
            return 0;
        int maxProfit = -999999;
        int minStock = prices[0];
        for (int i = 0; i < prices.size(); i++)
        {
            maxProfit = max(maxProfit, prices[i] - minStock);
            minStock = min(minStock, prices[i]);
        }
        return maxProfit;
    }
};
