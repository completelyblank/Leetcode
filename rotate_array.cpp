class Solution 
{
public:
    void rotate(vector<int>& nums, int k) 
    {
        int n = nums.size();
        k = k % n; // Handle cases where k >= n

        // Step 1: Create a temporary array to store rotated elements
        vector<int> temp(n);

        // Step 2: Place elements from index n-k to n in temp
        for (int i = 0; i < k; i++) 
        {
            temp[i] = nums[n - k + i];
        }

        // Step 3: Place the remaining elements from index 0 to n-k in temp
        for (int i = k; i < n; i++) 
        {
            temp[i] = nums[i - k];
        }

        // Step 4: Copy temp array back to nums
        for (int i = 0; i < n; i++) 
        {
            nums[i] = temp[i];
        }
    }
};
