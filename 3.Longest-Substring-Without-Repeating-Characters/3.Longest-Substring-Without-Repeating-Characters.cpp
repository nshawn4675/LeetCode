class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> last_seen(256, -1);
        int res = 0;
        for (int start=0, end=0; end<s.size(); end++) {
            if (start <= last_seen[s[end]])
                start = last_seen[s[end]] + 1;
            res = max(res, end - start + 1);
            last_seen[s[end]] = end;
        }
        return res;
    }
};