class Solution {
public:
int calculate(string s) {
    int result = 0, num = 0, sign = 1;
    stack<int> stk;

    for (char c : s) {
        if (isdigit(c)) {
            num = num * 10 + (c - '0'); // build the number
        } else if (c == '+') {
            result += sign * num;
            num = 0;
            sign = 1;
        } else if (c == '-') {
            result += sign * num;
            num = 0;
            sign = -1;
        } else if (c == '(') {
            // Push current result and sign to stack for later
            stk.push(result);
            stk.push(sign);
            result = 0;
            sign = 1;
        } else if (c == ')') {
            result += sign * num;
            num = 0;
            result *= stk.top(); stk.pop(); // get sign before '('
            result += stk.top(); stk.pop(); // get result before '('
        }
        // ignore spaces
    }
    result += sign * num; // last number
    return result;
}
};
