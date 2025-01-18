class Solution 
{
    public:
        bool canConstruct(string ransomNote, string magazine) 
        {
            unordered_map<char, int> magazineCount;

            // Count the frequency of each letter in magazine
            for (char c : magazine) 
            {
                magazineCount[c]++; //map filled up
            }

            // Check if ransomNote can be made from magazine
            for (char c : ransomNote) 
            {
                if (magazineCount[c] > 0) 
                {
                    magazineCount[c]--; // letter used
                } 
                else 
                {
                    return false; // Not enough letters in magazine
                }
            }

            return true; //enough letters
        }
};
