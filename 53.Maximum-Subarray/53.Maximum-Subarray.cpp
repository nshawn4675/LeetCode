class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cur_sum = 0, max_sum = INT_MIN;
        for (int n: nums) {
            if (cur_sum+n < n)
                cur_sum = n;
            else
                cur_sum += n;
            max_sum = max(cur_sum, max_sum);
        }
        return max_sum;
    }
};