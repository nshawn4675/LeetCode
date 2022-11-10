[Climbing Stairs](https://leetcode.com/problems/climbing-stairs/)  

- Solution 1: DFS (TLE)
    - Use DFS to enumerate all the possible ways to climb up stairs.
    - Time complexity: O(2^n)
    - Space complexity: O(n)
- Solution 2: DP (Bottom-up)
    - define dp[i] as the ways to get up to stair i, so that dp[i] = dp[i-1] (need 1 more step to stair i) + dp[i-2] (need 2 more steps to stair i).
    - Time complexity: O(n)
    - Space complexity: O(n)
- Solution 3: DP (Top-down)
    - Use technique like memoization.
    - Time complexity: O(n)
    - Space complexity: (n)