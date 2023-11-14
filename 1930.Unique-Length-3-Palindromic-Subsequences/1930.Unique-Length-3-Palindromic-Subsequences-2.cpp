class Solution {
public:
    int countPalindromicSubsequence(string s) {
        unordered_set<char> letters;
        int ans = 0;

        // count unique letters in s
        for (char c: s) {
            letters.insert(c);
        }

        // O(26) = O(1)
        // for each unique letters in s
        for (char c: letters) {
            int l = -1, r = 0;

            // find the first and last one
            for (int m=0; m<s.size(); m++) {
                if (s[m] != c) continue;

                if (l == -1) l = m;
                r = m;
            }

            // count the unique letters in the middle of palindrome
            unordered_set<char> between;
            for (int m=l+1; m<r; m++) {
                between.insert(s[m]);
            }

            ans += between.size();
        }

        return ans;
    }
};