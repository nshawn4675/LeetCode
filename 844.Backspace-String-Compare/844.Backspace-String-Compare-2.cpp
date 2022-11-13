class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int s_len = 0, t_len = 0;

        for (int i=0; i<s.size(); i++) {
            if (s[i] == '#') {
                s_len = max(0, s_len-1);
            } else {
                s[s_len++] = s[i];
            }
        }
        for (int i=0; i<t.size(); i++) {
            if (t[i] == '#') {
                t_len = max(0, t_len-1);
            } else {
                t[t_len++] = t[i];
            }
        }

        if (s_len != t_len) return false;
        for (int i=0; i<s_len; i++) {
            if (s[i] != t[i]) return false;
        }
        
        return true;
    }
};