class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        string s = "";
        while (0 < x) {
            s += to_string(x%10);
            x /= 10;
        }
        for (int i=0, j=s.size()-1; i<j; i++, j--)
            if (s[i] != s[j]) return false;
        return true;
    }
};