class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> cnt(3, 0);
        for (int num: nums) cnt[num]++;
        
        int idx = 0;
        while (0 < cnt[0]--) nums[idx++] = 0;
        while (0 < cnt[1]--) nums[idx++] = 1;
        while (0 < cnt[2]--) nums[idx++] = 2;
    }
};