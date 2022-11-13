class Solution {
public:
    int romanToInt(string s) {
        int res = 0;
        unordered_map<char, int> tbl = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };

        for (int i=0; i<s.size(); i++) {
            if (tbl[s[i]] < tbl[s[i+1]])
                res -= tbl[s[i]];
            else
                res += tbl[s[i]];
        }

        return res;
    }
};