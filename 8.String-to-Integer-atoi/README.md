[8. String to Integer (atoi)](https://leetcode.com/problems/string-to-integer-atoi)  

- Solution 1: 
    - First, skipping leading white spaces. Second, determine sign. Third, handle numbers. Forth, handle overflow, if INT_MAX < base * 10 (INT_MAX / 10 < base), or INT_MAX < base * 10 + cur_num (INT_MAX - cur_num < base * 10).
    - Time complexity: O(n)
    - Space complexity: O(1)