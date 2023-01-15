[525. Contiguous Array](https://leetcode.com/problems/contiguous-array/)  

- Solution 1: brute force (TLE)
    - count the number of 0s and 1s for each subarray.
    - Time complexity: O(n^2)
    - Space complexity: O(1)
- Solution 2: Use hash map to record count
    - Use count to record how many 0s and 1s when loop the nums, if it is 0 then count-1, if it is 1 then count+1. The same numbers of 0s and 1s occurs at the idx where the count is the same.
    - Use hash map to record counts when loop the nums, if the count is seen before, it means that the numbers of 0s and 1s are the same from the time seen before to now. If the count isn't seen before, just record it.
    - Time complexity: O(n)
    - Space complexity: O(n)