class Solution {
public:
    bool isPalindrome(string s) {
        string clean_s;
        stack<char> stk;
        int i;
        
        // clean raw string
        for (char c: s) {
            if (isalnum(c)) 
                clean_s += tolower(c);
        }

        // first half
        for (i=0; i<clean_s.size()/2; i++)
            stk.push(clean_s[i]);

        // skip middle if string length is odd.
        i += clean_s.size() % 2;
        
        // second half
        for (; i<clean_s.size(); i++) {
            if (stk.empty() || 
                (clean_s[i] != stk.top()))
            {
                return false;
            }
            stk.pop();
        }

        return stk.empty();
    }
};