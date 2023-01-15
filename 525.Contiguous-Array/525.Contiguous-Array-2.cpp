class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int ans = 0;
        unordered_map<int, int> cnt_idx;
        int cnt = 0;
        cnt_idx[0] = -1;
        for (int i = 0; i < nums.size(); i++) {
            cnt += (nums[i] == 0) ? -1 : 1;
            if (cnt_idx.find(cnt) != cnt_idx.end()) {
                ans = max(ans, i - cnt_idx[cnt]);
            } else cnt_idx[cnt] = i;
        }
        return ans;
    }
};