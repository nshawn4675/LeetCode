class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> stk_s, stk_t;
        for (char c: s) {
            if ((c == '#') && !stk_s.empty()) {
                stk_s.pop();
            } else if (c != '#')
                stk_s.push(c);
        }
        for (char c: t) {
            if ((c == '#') && !stk_t.empty()) {
                stk_t.pop();
            } else if (c != '#')
                stk_t.push(c);
        }

        return stk_s == stk_t;
    }
};