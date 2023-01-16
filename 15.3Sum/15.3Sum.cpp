class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            int l = i + 1;
            int r = nums.size() - 1;
            while (l < r) {
                int sum = nums[i] + nums[l] + nums[r];
                if (sum < 0) l++;
                else if (0 < sum) r--;
                else {
                    /* sum == 0 */
                    res.push_back({nums[i], nums[l], nums[r]});
                    l++; r--;
                    while ((l < r) && (nums[l - 1] == nums[l])) l++; // avoid l duplication
                    while ((l < r) && (nums[r] == nums[r + 1])) r--; // avoid r duplication
                }
                while ((i + 1) < nums.size() && nums[i]==nums[i+1]) i++; // avoid i duplication
            }
        }
        return res;
    }
};