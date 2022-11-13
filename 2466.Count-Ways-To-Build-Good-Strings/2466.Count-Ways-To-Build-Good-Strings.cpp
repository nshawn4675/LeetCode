class Solution {
public:
    int countGoodStrings(int low, int high, int zero, int one) {
        const int mod = 1e9 + 7;
        int res = 0;
        vector<int> dp(high+1, 0);
        dp[0] = 1;
        for (int cur_len=1; cur_len<=high; cur_len++) {
            int zero_prev_len = cur_len - zero;
            if (0 <= zero_prev_len)
                dp[cur_len] = (dp[cur_len] + dp[zero_prev_len]) % mod;

            int one_prev_len = cur_len - one;
            if (0 <= one_prev_len)
                dp[cur_len] = (dp[cur_len] + dp[one_prev_len]) % mod;

            if (low <= cur_len)
                res = (res + dp[cur_len]) % mod;
        }
        return res;
    }
};