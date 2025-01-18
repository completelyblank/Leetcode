class Solution 
{
    public:
        int maxArea(vector<int>& height) 
        {
            int l = 0; // Left pointer
            int r = height.size() - 1; // Right pointer
            int max_area = 0; // To store the maximum area

            while (l < r) 
            {
                // Calculate the current area
                int area = min(height[l], height[r]) * (r - l); //min bar used to not slant
                max_area = max(max_area, area); // Update max_area if needed

                // Move the pointer pointing to the shorter line
                if (height[l] < height[r]) 
                    l++;
                else 
                    r--;
            }

            return max_area;
        }
};
