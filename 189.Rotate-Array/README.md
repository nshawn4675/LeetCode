[189. Rotate Array](https://leetcode.com/problems/rotate-array/)  

- Solution 1: simulation
    - simulate rotate array one by one.
    - Time complexity: O(n)
    - Space complexity: O(n)
- Solution 2: subarray
    - the rotated array = subarray1 + subarray2, where subarray1 is the last k numbers, and subarray2 is the first (n-k) numbers.
    - Time complexity: O(1)
    - Space complexity: O(n)
- Solution 3: reversion
    - rotate an array with 3 reversion.
        - reverse all numbers.
        - reverse first k numbers.
        - reverse last (n-k) numbers.
    - Time complexity: O(n)
    - Space complexity: O(1)