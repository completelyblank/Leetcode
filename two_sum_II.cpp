class Solution 
{
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        int left = 0, right = numbers.size() - 1;

        while (left < right) 
        {
            int sum = numbers[left] + numbers[right];

            if (sum == target) 
            {
                // Return 1-indexed positions
                return {left + 1, right + 1};
            } 
            else if (sum < target) 
            {
                left++; // Increase left pointer to get a larger sum
            } 
            else 
            {
                right--; // Decrease right pointer to get a smaller sum
            }
        }
        // This should never be reached due to the guaranteed solution
        return {};
    }
};
