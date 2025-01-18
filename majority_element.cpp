#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        unordered_map<int, int> countMap; // To store the count of each element //count array //hash map
        int n = nums.size();
        int majorityThreshold = n / 2;   // Majority 

        for (int num : nums) 
        {
            countMap[num]++; // Increment the count for the current element

            // Check if the current element is the majority
            if (countMap[num] > majorityThreshold) 
            {
                return num;
            }
        }

        // This point will never be reached since the problem guarantees a majority element (at least it says so to assume xD)
        return -1;
    }
};
