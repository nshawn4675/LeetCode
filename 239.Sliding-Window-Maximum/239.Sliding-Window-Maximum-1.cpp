class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        
        for (int end = k; end <= nums.size(); end++) {
            int start = end - k;
            int max_num = INT_MIN;
            for (int idx = start; idx < end; idx++) {
                max_num = max(max_num, nums[idx]);
            }
            ans.push_back(max_num);
        }

        return ans;
    }
};