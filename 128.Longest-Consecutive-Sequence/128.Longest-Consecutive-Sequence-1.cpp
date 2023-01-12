class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() < 2) return nums.size();

        int ans = 1;
        for (int i = 0; i < nums.size(); i++) {
            int cur_ans = 1;
            int num = nums[i] + 1;
            while (is_exist(nums, num++)) {
                cur_ans++;
                ans = max(ans, cur_ans);
            }
        }
        return ans;
    }
private:
    bool is_exist(vector<int>& nums, int target) {
        for (int num: nums) {
            if (num == target) return true;
        }
        return false;
    }
};