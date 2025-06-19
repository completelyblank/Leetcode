class Solution {
public:
    bool wordPattern(string pattern, string s) {
         unordered_map<char, string> pToWord;
    unordered_set<string> usedWords;

    istringstream iss(s);
    vector<string> words;
    string word;
    
    while (iss >> word) {
        words.push_back(word);
    }

    if (words.size() != pattern.size())
        return false;

    for (int i = 0; i < pattern.size(); ++i) {
        char c = pattern[i];
        string w = words[i];

        if (pToWord.count(c)) {
            if (pToWord[c] != w)
                return false;
        } else {
            if (usedWords.count(w)) // Another char already maps to this word
                return false;
            pToWord[c] = w;
            usedWords.insert(w);
        }
    }
    return true;
    }
};
