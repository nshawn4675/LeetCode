class Solution {
public:
    int longestPalindrome(string s) {
        vector<int> cnt(256, 0);
        int res = 0;
        bool one_mid = 0;
        
        for (char c: s) cnt[c]++;

        for (int x: cnt) {
            if (x % 2) {
                res += (x-1);
                one_mid = 1;
            } else
                res += x;
        }

        return res + one_mid;
    }
};