class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        const int n = nums.size();
        k %= n;
        vector<int> tmp(nums.end()-k, nums.end());
        tmp.insert(tmp.end(), nums.begin(), nums.end()-k);
        nums = tmp;
    }
};