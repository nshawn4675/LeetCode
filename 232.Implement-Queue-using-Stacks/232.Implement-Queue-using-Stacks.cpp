class MyQueue {
public:
    MyQueue() {
        input_stk = output_stk = {};
    }
    
    void push(int x) {
        input_stk.push(x);
    }
    
    int pop() {
        int res = -1;
        if (empty()) return res;
        if (output_stk.empty())
            in2out();
        res = output_stk.top();
        output_stk.pop();
        return res;
    }
    
    int peek() {
        int res = -1;
        if (empty()) return res;
        if (output_stk.empty())
            in2out();
        res = output_stk.top();
        return res;
    }
    
    bool empty() {
        return input_stk.empty() && output_stk.empty();
    }
private:
    stack<int> input_stk;
    stack<int> output_stk;
    void in2out() {
        while (!input_stk.empty()) {
            output_stk.push(input_stk.top());
            input_stk.pop();
        }
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */