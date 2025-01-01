class Solution 
{
    public:
        int removeElement(vector<int>& nums, int val) 
        {
            int n = nums.size();
            int end = n - 1; //last elem pointer
            int i = 0; //pointer at start 

            while (i <= end) //should join at middle
            {
                if (nums[i]==val && nums[end]!=val) // Swap nums[i] with nums[end] and decrement end
                {
                    swap(nums[i], nums[end]); 
                    end--;
                }
                else if (nums[i]==val && nums[end]==val) //edge case?
                {
                    end--;
                }
                else // Move to the next index 
                {
                    i++;
                }
            }
            // Return the count of elements not equal to val
            return end + 1;
        }
};
