[560. Subarray Sum Equals K](https://leetcode.com/problems/subarray-sum-equals-k/)  

- Solution 1: brute force (TLE)
    - sum every subarray.
    - Time complexity: O(n^2)
    - Space complexity: O(1)
- Solution 2: hash map
    - Use a hash map to store current sum -> count of current sum occured, if current_sum - k exists in hash map, means that from previous occured timings to now can sum to k.
    - Time complexity: O(n)
    - Space complexity: O(n)