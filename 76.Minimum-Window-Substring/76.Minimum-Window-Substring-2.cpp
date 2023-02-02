class Solution {
public:
    string minWindow(string s, string t) {
        /* target: char -> count */
        unordered_map<char, int> t_char_cnt;
        for (char c: t) t_char_cnt[c]++;
        
        unordered_map<char, int> cur_char_cnt; // current: char -> count
        int l = 0, res_len = INT_MAX, res_l = 0;
        int target_cnt = t_char_cnt.size(); // how many char's cnt need to meet.
        int cur_cnt = 0; // how many char's cnt are overed target now.
        for (int r = 0; r < s.size(); r++) {
            char c = s[r];
            if (t_char_cnt.find(c) != t_char_cnt.end()) {
                /* if c is in target, update current char counter
                 * if it increase and pass through target line,
                 * then this char is passed.
                 */
                cur_char_cnt[c]++;
                if (cur_char_cnt[c] == t_char_cnt[c]) {
                    cur_cnt++;
                }
            }

            while (cur_cnt == target_cnt) {
                /* current substring is valid,
                 * keep contract substring from left,
                 * until it's not valid
                 */
                if ((r - l + 1) < res_len) {
                    res_l = l;
                    res_len = r - l + 1;
                }
                char c = s[l++];
                if (t_char_cnt.find(c) != t_char_cnt.end()) {
                    /* if c is in target, update current char counter
                     * if it decrease and pass through target line,
                     * then this char is not passed.
                     */
                    if (cur_char_cnt[c] == t_char_cnt[c]) {
                        cur_cnt--;
                    }
                    cur_char_cnt[c]--;
                }
            }
        }
        return (res_len == INT_MAX) ? "" : s.substr(res_l, res_len);
    }
};