class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int ans = 0;
        unordered_set<int> s(nums.begin(), nums.end());
        for (int num: nums) {
            if (s.find(num-1) != s.end()) continue;

            int cur_ans = 1;
            while (s.find(++num) != s.end()) cur_ans++;
            ans = max(ans, cur_ans);
        }
        return ans;
    }
};