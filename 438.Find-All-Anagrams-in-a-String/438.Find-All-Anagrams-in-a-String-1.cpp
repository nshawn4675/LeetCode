class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        if (s.size() < p.size()) return {};

        unordered_map<char, int> p_ch_cnt;
        for (char c: p) {
            p_ch_cnt[c]++;
        }

        vector<int> ans;
        for (int r = p.size() - 1; r < s.size(); r++) {
            unordered_map<char, int> s_ch_cnt;
            for (int l = r - (p.size() - 1); l <= r; l++) {
                s_ch_cnt[s[l]]++;
            }
            if (s_ch_cnt == p_ch_cnt) {
                ans.push_back(r - (p.size() - 1));
            }
        }

        return ans;
    }
};