[Backspace String Compare](https://leetcode.com/problems/backspace-string-compare/)  

- Solution 1: Using stack
    - use a stack to simulate backspace process.
    - Time complexity: O(n)
    - Space complexity: O(n)
- Solution 2: Two Pointers
    - Use a pointer a replace origin string with a processed one, then check two processed strings are the same.
    - Time complexity: O(n)
    - Space complexity: O(1)