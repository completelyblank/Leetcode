class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
    
    for (const string& token : tokens) {
        if (token == "+" || token == "-" || token == "*" || token == "/") {
            // Pop the top two elements
            int b = st.top(); st.pop();
            int a = st.top(); st.pop();
            int result;

            if (token == "+") result = a + b;
            else if (token == "-") result = a - b;
            else if (token == "*") result = a * b;
            else if (token == "/") result = a / b; // Integer division

            st.push(result);
        } else {
            // Convert operand from string to int and push
            st.push(stoi(token));
        }
    }

    return st.top(); // Final result
    }
};
