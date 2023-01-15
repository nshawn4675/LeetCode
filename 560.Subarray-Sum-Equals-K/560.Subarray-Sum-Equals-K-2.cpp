class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int ans = 0;
        unordered_map<int, int> sum_cnt;
        sum_cnt[0] = 1;
        int cur_sum = 0;
        for (int num: nums) {
            cur_sum += num;
            if (sum_cnt.find(cur_sum-k) != sum_cnt.end())
                ans += sum_cnt[cur_sum-k];
            sum_cnt[cur_sum]++;
        }
        return ans;
    }
};