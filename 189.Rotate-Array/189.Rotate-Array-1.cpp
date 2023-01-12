class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        const int n = nums.size();
        k %= n;
        vector<int> tmp = nums;
        for (int i = 0; i < n; i++) {
            nums[(i+k)%n] = tmp[i];
        }
    }
};