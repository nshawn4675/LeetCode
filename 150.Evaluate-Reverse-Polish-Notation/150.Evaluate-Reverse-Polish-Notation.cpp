class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        unordered_map<string, function<int (int, int)>> func_map = {
            {"+", [] (long a, long b) {return a+b;}},
            {"-", [] (int a, int b) {return a-b;}},
            {"*", [] (long a, long b) {return a*b;}},
            {"/", [] (int a, int b) {return a/b;}}
        };
        stack<int> stk;
        stk.push(stoi(tokens[0]));
        for (string s: tokens) {
            if (func_map.count(s) == 0) {
                stk.push(stoi(s));
            } else {
                int b = stk.top(); stk.pop();
                int a = stk.top(); stk.pop();
                stk.push(func_map[s](a, b));
            }
        }
        return stk.top();
    }
};