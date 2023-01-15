class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int ans = 0;
        for (int start = 0; start < nums.size(); start++) {
            int zeros = 0, ones = 0;
            for (int end = start; end < nums.size(); end++) {
                if (nums[end] == 0) zeros++;
                else ones++;

                if (zeros == ones)
                    ans = max(ans, end - start + 1);
            }
        }
        return ans;
    }
};