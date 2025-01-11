class Solution 
{
    public:
        int maxProfit(vector<int>& prices) 
        {
            int buy = 0; // Pointer to the day to buy
            int sell = 1; // Pointer to the day to sell
            int maxProfit = 0; // Initialize maxProfit to 0
            
            while (sell < prices.size()) 
            {
                if (prices[sell] > prices[buy]) 
                {
                    // Calculate profit and update maxProfit
                    int profit = prices[sell] - prices[buy];
                    maxProfit = max(maxProfit, profit);
                } 
                else 
                {
                    // Move the buy pointer to the current sell pointer
                    buy = sell;
                }
                // Move the sell pointer forward
                sell++;
            }
            
            return maxProfit; // Return the maximum profit found
        }
};
