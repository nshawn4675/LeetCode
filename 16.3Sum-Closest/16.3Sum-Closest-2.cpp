class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int ans = nums[0]+nums[1]+nums[2];
        for (int i = 0; i < nums.size(); i++) {
            int l = i + 1, r = nums.size() - 1;
            while (l < r) {
                int cur_sum = nums[i] + nums[l] + nums[r];
                if (abs(target - cur_sum) < abs(target - ans))
                    ans = cur_sum;
                if (cur_sum < target) l++;
                else if (target < cur_sum) r--;
                else return cur_sum;
            }
        }
        return ans;
    }
};