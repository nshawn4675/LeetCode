class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int ans = nums[0]+nums[1]+nums[2];
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                for (int k = j + 1; k < nums.size(); k++) {
                    int cur_sum = nums[i] + nums[j] + nums[k];
                    if (abs(cur_sum - target) < abs(ans - target))
                        ans = cur_sum;
                }
            }
        }
        return ans;
    }
};