class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        // Step 1: Initialize a count map
        unordered_map<int, int> count;
        int pointer = 0; // Pointer to the position of valid elements

        // Step 2: Traverse the array
        for (int i = 0; i < nums.size(); i++) 
        {
            count[nums[i]]++; // Increment count for nums[i]

            // Step 3: If the count is <= 2, keep the element
            if (count[nums[i]] <= 1) 
            {
                nums[pointer] = nums[i];
                pointer++;
            }
        }

        // Step 4: Return the length of the modified array
        return pointer;
    }
};
