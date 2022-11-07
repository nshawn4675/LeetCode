[Best Time to Buy and Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/)  

- Solution 1: Brute Force
    - Enumerate all the possible profits.
    - Time complexity: O(n^2) (TLE)
    - Space complexity: O(1)
- Solution 2: DP
    - From start to end, record minimum price and maximum profit so far.
    - Time complexity: O(n)
    - Space complexity: O(1)