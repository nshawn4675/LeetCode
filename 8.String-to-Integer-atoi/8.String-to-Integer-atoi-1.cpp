class Solution {
public:
    int myAtoi(string s) {
        int idx = 0;
        bool is_positive = true;

        while (s[idx] == ' ') idx++;

        switch (s[idx]) {
            case '-':
                is_positive = false;
            case '+':
                idx++;
                break;
        }

        int ans = 0;
        while ((idx < s.size()) &&
               (('0' <= s[idx]) && (s[idx] <= '9')))
        {
            int cur_num = s[idx++] - '0';
            if ((INT_MAX/10 < ans) ||
                (INT_MAX-cur_num < ans*10))
            {
                return is_positive ? INT_MAX : INT_MIN;
            }
            ans = ans*10 + cur_num;
        }

        return is_positive ? ans : (-1)*ans;
    }
};