class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        multiset<int> window;

        for (int i = 0; i < nums.size(); i++) {
            window.insert(nums[i]);
            if ((k - 1) <= i) {
                ans.push_back(*window.rbegin());
                window.erase(window.find(nums[i - (k - 1)]));
            }
        }

        return ans;
    }
};