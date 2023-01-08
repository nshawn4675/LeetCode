class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> l(nums.size(), 1);
        vector<int> r(nums.size(), 1);
        vector<int> ans(nums.size(), 1);

        // l[i] = nums[0] * ... * nums[i-1]
        for (int i = 1; i < nums.size(); i++)
            l[i] = l[i - 1] * nums[i - 1];

        // r[i] = nums[i+1] * ... * nums[n-1]
        for (int i = nums.size() - 2; 0 <= i; i--)
            r[i] = nums[i + 1] * r[i + 1];
        
        for (int i = 0; i < nums.size(); i++)
            ans[i] = l[i] * r[i];
        
        return ans;
    }
};