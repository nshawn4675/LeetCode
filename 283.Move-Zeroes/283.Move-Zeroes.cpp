class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int seq_idx = 0;
        for (int i=0; i<nums.size(); i++) {
            if (nums[i] != 0)
                nums[seq_idx++] = nums[i];
        }
        for (; seq_idx<nums.size(); seq_idx++)
            nums[seq_idx] = 0;
    }
};