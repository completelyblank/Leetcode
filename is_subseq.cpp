class Solution 
{
  public:
      bool isSubsequence(string s, string t) {
          int i = 0, j = 0;
          int m = s.length(), n = t.length();
          
          // Use two pointers to traverse both strings
          while (i < m && j < n) {
              if (s[i] == t[j]) {
                  i++; // Move the pointer in s if characters match
              }
              j++; // Always move the pointer in t
          }
          
          // If we've traversed all of s, it's a subsequence
          return i == m;
      }
};
