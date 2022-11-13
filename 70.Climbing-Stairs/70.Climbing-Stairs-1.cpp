class Solution {
public:
    int climbStairs(int n) {
        res = 0;
        dfs(n);
        return res;
    }
private:
    int res;
    void dfs(int n) {
        res += (n == 0);
        if (n <= 0) return;
        dfs(n-1);
        dfs(n-2);
    }
};