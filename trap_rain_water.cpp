class Solution 
{
public:
    int trap(vector<int>& height) 
    {
        int left = 0, right = height.size() - 1; // Initialize two pointers
        int leftMax = 0, rightMax = 0; // Track maximum heights on both sides
        int waterTrapped = 0; // Store total water trapped

        while (left < right) 
        {
            if (height[left] < height[right]) 
            {
                // If the left bar is shorter
                if (height[left] >= leftMax) 
                {
                    leftMax = height[left]; // Update leftMax
                } 
                else 
                {
                    waterTrapped += leftMax - height[left]; // Calculate trapped water
                }
                left++; // Move the left pointer inward
            } 
            else 
            {
                // If the right bar is shorter or equal
                if (height[right] >= rightMax) 
                {
                    rightMax = height[right]; // Update rightMax
                } 
                else 
                {
                    waterTrapped += rightMax - height[right]; // Calculate trapped water
                }
                right--; // Move the right pointer inward
            }
        }

        return waterTrapped; // Return total water trapped
    }
};
