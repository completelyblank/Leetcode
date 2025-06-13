class MinStack {
private:
    std::vector<int> dataVec;   // main stack
    std::vector<int> minVec;    // min at each level

public:
    // Constructor
    MinStack() {}

    // Push value and track min
    void push(int val) {
        dataVec.push_back(val);

        if (minVec.empty() || val <= minVec.back()) {
            minVec.push_back(val);
        } else {
            minVec.push_back(minVec.back());
        }
    }

    // Pop from both vectors
    void pop() {
        if (!dataVec.empty()) {
            dataVec.pop_back();
            minVec.pop_back();
        }
    }

    // Return top of dataVec
    int top() {
        if (!dataVec.empty()) return dataVec.back();
        return -1; // or throw
    }

    // Return top of minVec
    int getMin() {
        if (!minVec.empty()) return minVec.back();
        return -1; // or throw
    }     
    
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
