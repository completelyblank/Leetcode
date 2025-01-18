class Solution 
{
  public:
      bool isIsomorphic(string s, string t) 
      {
          if (s.length() != t.length()) //out case
          {
              return false; // Strings of different lengths can't be isomorphic
          }
  
          unordered_map<char, char> mapStoT; // Mapping from s -> t
          unordered_set<char> usedChars;    // Characters already mapped to in t
  
          for (int i = 0; i < s.length(); i++) 
          {
              char charS = s[i];
              char charT = t[i];
  
              // If charS is already mapped
              if (mapStoT.find(charS) != mapStoT.end()) 
              {
                  // Check if the mapped value matches charT
                  if (mapStoT[charS] != charT) 
                  {
                      return false; // Mismatch in mapping
                  }
              } 
              else 
              {
                  // If charT is already used for another character
                  if (usedChars.find(charT) != usedChars.end()) 
                  {
                      return false; // charT is already mapped to another character //so not isomorphic
                  }
  
                  // Create the mapping from charS to charT
                  mapStoT[charS] = charT;
                  usedChars.insert(charT); // Mark charT as used
              }
          }
  
          return true; // Strings are isomorphic
      }
};
