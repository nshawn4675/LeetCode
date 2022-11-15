[Palindrome Number](https://leetcode.com/problems/palindrome-number/)  

- Solution 1: turn into string
    - turn input number into string, then check whether this string is palindrome or not.
    - Time complexity: O(digits)
    - Space complexity: O(digits)
- Solution 2: invert number
    - Use another variable to store the inverted input, then check whether these two numbers are the same.
    - Time complexity: O(digits)
    - Space complexity: O(1)