class Solution 
{
    public:
        int maxProfit(vector<int>& prices) 
        {
            int n = prices.size();
            if (n <= 1) return 0; // No transactions possible

            int maxProfit = 0;
            int buyptr = 0; // Start with buy pointer at day 0

            for (int sellptr = 1; sellptr < n; ++sellptr)
            {
                if (prices[sellptr] >= prices[buyptr]) 
                {
                    // If sell price is greater or equal, calculate profit
                    maxProfit += prices[sellptr] - prices[buyptr];
                    // Move buyptr to sellptr for the next potential transaction
                    buyptr = sellptr;
                } 
                else 
                {
                    // Reset buyptr to the current sellptr if prices drop
                    buyptr = sellptr;
                }
            }

            return maxProfit;
        }
};
