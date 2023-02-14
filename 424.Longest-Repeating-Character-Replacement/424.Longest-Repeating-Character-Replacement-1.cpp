class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> char_cnt; // count char freq for sliding window
        int l = 0, maxf = 0;
        int ans = 0;

        for (int r = 0; r < s.size(); r++) {
            char_cnt[s[r]]++;
            maxf = max(maxf, char_cnt[s[r]]);
            while (k < ((r - l + 1) - maxf)) {
                /* shrink sliding window until we can swap k chars 
                 * to form a valid substring, all chars which the freq
                 * are not maximum will be swapped to the char with maximum
                 * freq in current sliding window, and we can swap k chars.
                 */
                char_cnt[s[l]]--;
                l++;
                auto new_maxf = *max_element(char_cnt.begin(), char_cnt.end(), 
                    [](auto& a, auto& b){
                        return a.second < b.second;
                    });
                maxf = new_maxf.second;
            }
            ans = max(ans, r - l + 1);
        }
        return ans;
    }
};