class Solution {
public:
    string longestPalindrome(string s) {
        int ans_len = 0;
        string ans = "";
        for (int i = 0; i < s.size(); i++) {
            // check for odd length palindrome
            int l = i, r = i;
            while ((0 <= l) && (r < s.size()) &&
                   (s[l] == s[r]))
            {
                if (ans_len < (r - l + 1)) {
                    ans_len = r - l + 1;
                    ans = s.substr(l, ans_len);
                }
                l--;
                r++;
            }

            // check for even length palindrome
            l = i, r = i + 1;
            while ((0 <= l) && (r < s.size()) &&
                   (s[l] == s[r]))
            {
                if (ans_len < (r - l + 1)) {
                    ans_len = r - l + 1;
                    ans = s.substr(l, ans_len);
                }
                l--;
                r++;
            }
        }

        return ans;
    }
};