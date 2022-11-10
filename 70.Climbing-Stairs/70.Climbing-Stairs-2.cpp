class Solution {
public:
    int climbStairs(int n) {
        vector<int> dp(n+1, -1);
        for (int i=1; i<=n; i++) {
            switch (i) {
                case 1:
                    dp[i] = 1;
                    break;
                case 2:
                    dp[i] = 2;
                    break;
                default:
                    dp[i] = dp[i-1]+dp[i-2];
                    break;
            }
        }
        return dp[n];
    }
};