[Number of 1 Bits](https://leetcode.com/problems/number-of-1-bits/)  

- Solution 1: __builtin_popcount
    - Use __builtin_popcount to calculate 1 bits.
    - Time complexity: O(logn)
    - Space complexity: O(1)
- Solution 2: Division
    - Calculate each 1 bits manually.
    - Time complexity: O(logn)
    - Space complexity: O(1)
- Solution 3: Bit manipulation
    - Use 'i & (i-1)' to eliminate '1' which is nearest to LSB.
    - Time complexity: O(logn)
    - Space complexity: O(1)