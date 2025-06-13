class Solution {
public:
    bool isValid(string s) {
     bool roundOpen = false, roundClose = false;
    bool squareOpen = false, squareClose = false;
    bool curlyOpen = false, curlyClose = false;

    for (char c : s) {
        if (c == '(') roundOpen = true;
        else if (c == ')') {
            roundClose = true;
            if (!roundOpen) return false;
            
            roundOpen = roundClose = false;
        }

        else if (c == '[') squareOpen = true;
        else if (c == ']') {
            squareClose = true;
            if (!squareOpen) return false;
            squareOpen = squareClose = false;
        }

        else if (c == '{') curlyOpen = true;
        else if (c == '}') {
            curlyClose = true;
            if (!curlyOpen) return false;
            curlyOpen = curlyClose = false;
        }
    }

    // If any open paren is left unmatched
    if (roundOpen || squareOpen || curlyOpen) return false;

    return true;
    }
};
