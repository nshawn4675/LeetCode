class Solution {
public:
    int climbStairs(int n) {
        dp = vector<int>(n+1, -1);
        return helper(n);
    }
private:
    vector<int> dp;
    int helper(int n) {
        if (n <= 0) return 0;
        if (n <= 2) return n;
        if (dp[n] != -1) return dp[n];
        dp[n] = helper(n-1) + helper(n-2);
        return dp[n];
    }
};