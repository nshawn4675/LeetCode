class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> ana_str;
        for (string s: strs) {
            /* all strings in a anagram group will have same sorted string */
            string tmp = s;
            sort(tmp.begin(), tmp.end());
            ana_str[tmp].push_back(s);
        }

        vector<vector<string>> ans;
        for (pair<string, vector<string>> p: ana_str) {
            /* get anagram group one by one */
            ans.push_back(p.second);
        }

        return ans;
    }
};