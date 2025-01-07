class Solution 
{
    public:
        bool canJump(vector<int>& nums) 
        {
            int n = nums.size();
            int maxJump = 0; // Maximum index we can reach so far
            
            for (int i = 0; i < n; ++i) 
            {
                // If the current index is beyond the maximum reachable index, return false
                if (i > maxJump) return false;
                // Update the maximum reachable index
                maxJump = max(maxJump, i + nums[i]);
                // If we can reach or exceed the last index, return true
                if (maxJump >= n - 1) return true;
            }
            
            return false;
        }
};
