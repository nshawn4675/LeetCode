class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        for (int i=0; i<nums.size(); i++) {
            int l = i+1;
            int r = nums.size()-1;
            int target = -nums[i];
            while (l < r) {
                int sum = nums[l]+nums[r];
                if (sum < target) l++;
                else if (target < sum) r--;
                else {
                    res.push_back({nums[i], nums[l], nums[r]});
                    l++; r--;
                    while (l<r && nums[l-1]==nums[l]) l++;
                    while (l<r && nums[r]==nums[r+1]) r--;
                }
                while (i+1<nums.size() && nums[i]==nums[i+1]) i++;
            }
        }
        return res;
    }
};