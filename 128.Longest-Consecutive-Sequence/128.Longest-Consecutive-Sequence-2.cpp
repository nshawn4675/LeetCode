class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() < 2) return nums.size();

        int ans = 1, cur_ans = 1;
        sort(nums.begin(), nums.end());
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i-1] == nums[i] - 1) {
                cur_ans++;
                ans = max(ans, cur_ans);
            } else if (nums[i-1] == nums[i]) {
                continue;
            } else {
                cur_ans = 1;
            }
        }
        return ans;
    }
};