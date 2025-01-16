class Solution 
{
    public:
        string reverseWords(string s) 
        {
            // Helper function to reverse a portion of the string in place
            auto reverse = [](string &str, int start, int end) 
            {
                while (start < end) 
                {
                    swap(str[start], str[end]);
                    start++;
                    end--;
                }
            };

            // Step 1: Reverse the entire string
            reverse(s, 0, s.size() - 1);

            int n = s.size();
            int writeIndex = 0; // To handle extra spaces
            int i = 0;

            // Step 2: Reverse each word
            while (i < n) 
            {
                // Skip spaces
                while (i < n && s[i] == ' ') i++;

                if (i >= n) break; // If only spaces left

                int wordStart = writeIndex; // Start position of the current word
                while (i < n && s[i] != ' ') 
                {
                    s[writeIndex++] = s[i++]; // Copy word
                }
                reverse(s, wordStart, writeIndex - 1); // Reverse the current word

                // Add a space after the word
                if (writeIndex < n) {
                    s[writeIndex++] = ' ';
                }
            }

            // Step 3: Remove the trailing space if it exists
            if (writeIndex > 0 && s[writeIndex - 1] == ' ') {
                writeIndex--;
            }

            // Resize string to the correct length
            s.resize(writeIndex);

            return s;
        }
};
