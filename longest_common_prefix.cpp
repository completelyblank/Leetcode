class Solution 
{
    public:
        string longestCommonPrefix(vector<string>& strs) 
        {
            if (strs.empty()) return ""; // Handle empty array case

            // Start with the first word as the initial prefix
            string prefix = strs[0];

            for (int i = 1; i < strs.size(); ++i) 
            {
                // Compare the current prefix with the next string in the array
                int j = 0; // Pointer for character comparison
                while (j < prefix.size() && j < strs[i].size() && prefix[j] == strs[i][j]) 
                {
                    ++j;
                }

                // Shorten the prefix to match the common prefix length
                prefix = prefix.substr(0, j);

                // If the prefix becomes empty, there is no common prefix
                if (prefix.empty()) return "";
            }

            return prefix;
        }
};
