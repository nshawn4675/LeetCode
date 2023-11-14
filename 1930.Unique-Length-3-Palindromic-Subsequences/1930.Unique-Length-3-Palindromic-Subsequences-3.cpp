class Solution {
public:
    int countPalindromicSubsequence(string s) {
        vector<int> first(26, -1);
        vector<int> last(26, -1);
        int ans = 0;

        // update first and last of current letter
        for (int i=0; i<s.size(); i++) {
            int cur = s[i] - 'a';
            if (first[cur] == -1) first[cur] = i;
            last[cur] = i;
        }

        for (int i=0; i<26; i++) {
            if (first[i] == -1) continue;

            // calculate unique letters between the palindrome
            unordered_set<char> between;
            for (int m=first[i]+1; m<last[i]; m++) {
                between.insert(s[m]);
            }

            ans += between.size();
        }

        return ans;
    }
};