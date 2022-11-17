class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        const int n = nums.size();
        vector<int> res(n, 0);
        int l = 0, r = n - 1;
        for (int i=n-1; 0<=i; i--) {
            if (abs(nums[l]) < abs(nums[r]))
                res[i] = nums[r]*nums[r--];
            else
                res[i] = nums[l]*nums[l++];
        }
        return res;
    }
};