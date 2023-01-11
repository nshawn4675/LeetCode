class Solution {
public:
    void sortColors(vector<int>& nums) {
        int size = nums.size();
        int l = 0, r = size-1;
        for (int i=0; i<size; ++i) {
            if (nums[i] == 0)
                swap(nums[l++], nums[i]);
            else if (nums[i] == 2 && i < r) {
                swap(nums[i--], nums[r--]);
            }
        }
    }
};