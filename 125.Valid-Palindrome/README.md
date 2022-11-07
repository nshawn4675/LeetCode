[Valid Palindrome](https://leetcode.com/problems/valid-palindrome/)

- Solution 1: Using Stack
    - Clean raw s first, then take advantage of stack FIFO to check whether the clean string is palindrome.
    - Time complexity: O(n)
    - Space complexity: O(n)
- Solution 2: Two Pointers
    - Use a pointer from start to end, another pointer from end to start, to check whether the string is palindrome.
    - Time complexity: O(n)
    - Space complexity: O(1)