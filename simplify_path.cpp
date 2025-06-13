class Solution {
public:
    string simplifyPath(string path) {
        vector<string> dirs;
        string temp;
        path += '/'; 

        for (char c : path) {
            if (c == '/') {
                if (temp == "..") {
                    if (!dirs.empty()) dirs.pop_back(); 
                } else if (!temp.empty() && temp != ".") {
                    dirs.push_back(temp); 
                }
                temp.clear();
            } else {
                temp += c;
            }
        }

        string result = "/";
        for (int i = 0; i < dirs.size(); ++i) {
            result += dirs[i];
            if (i != dirs.size() - 1) result += "/";
        }

        return result;
    }
};
