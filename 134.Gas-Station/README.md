[Gas Station](https://leetcode.com/problems/gas-station/)  

- Solution 1: brute force
    - Simulate all possible starting point.
    - Time complexity: O(n^2)
    - Space complexity: O(1)
- Solution 2: Greedy
    - Check whether the tour can be finished, if it can't be finished (gas_total < cost_total), then there's no starting point.
    - If it go from i to j, and it can't go any further, then there's no way that starting from k (i <= k <= j) can go any further, the better way is to try to start from j + 1.
    - Time complexity: O(n)
    - Space complexity: O(1)