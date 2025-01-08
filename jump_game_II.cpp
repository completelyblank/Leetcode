class Solution 
{
    //Memoization //Bottom up
    public:
        int jump(vector<int>& nums) 
        {
            int n = nums.size();
            vector<int> dp(n, INT_MAX); // DP array to store min jumps, initialized to INT_MAX
            dp[0] = 0; // Starting point, no jumps needed rn

            // Iterate through the array
            for (int i = 0; i < n; ++i) 
            {
                // For each index, calculate the farthest u can jump
                for (int j = 1; j <= nums[i] && i + j < n; ++j) 
                {
                    dp[i + j] = min(dp[i + j], dp[i] + 1); //check nu over edge (i+j)<n // 
                }
            }

            return dp[n - 1]; // Da minimum jumps to reach the last index
        }
};
