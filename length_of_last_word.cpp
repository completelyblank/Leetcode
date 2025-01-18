class Solution 
{
    public:
        int lengthOfLastWord(string s) 
        {
            reverse(s.begin(), s.end()); // Reverse the string
            int ptr = 0, count = 0;     // Initialize pointers and count
            
            // Skip trailing spaces
            while (ptr < s.size() && s[ptr] == ' ') 
            {
                ptr++;
            }

            // Count characters of the last word
            while (ptr < s.size() && s[ptr] != ' ') 
            {
                count++;
                ptr++;
            }

            return count; // Return the length of the last word
        }
};
