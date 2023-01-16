class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        deque<int> q; // nums[q[0]] > nums[q[1]] > ...
        for (int i = 0; i < nums.size(); i++) {
            while (!q.empty() &&
                   nums[q.back()] < nums[i])
            {
                q.pop_back();
            }
            q.push_back(i);
            if (q.front() < (i - (k - 1)))
                q.pop_front();

            if ((k - 1) <= i)
                ans.push_back(nums[q.front()]);
        }
        return ans;
    }
};