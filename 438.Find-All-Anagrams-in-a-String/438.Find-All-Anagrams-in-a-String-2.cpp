class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        if (s.size() < p.size()) return {};

        unordered_map<char, int> p_ch_cnt;
        unordered_map<char, int> s_ch_cnt;

        for (int i = 0; i < p.size(); i++) {
            p_ch_cnt[p[i]]++;
            s_ch_cnt[s[i]]++;
        }

        vector<int> ans;
        if (p_ch_cnt == s_ch_cnt) ans.push_back(0);

        int l = 0;
        for (int r = p.size(); r < s.size(); r++) {
            s_ch_cnt[s[r]]++;
            s_ch_cnt[s[l]]--;
            if (s_ch_cnt[s[l]] == 0) {
                s_ch_cnt.erase(s[l]);
            }
            l++;

            if (s_ch_cnt == p_ch_cnt) {
                ans.push_back(l);
            }
        }

        return ans;
    }
};