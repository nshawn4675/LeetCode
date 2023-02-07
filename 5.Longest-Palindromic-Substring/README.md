[5. Longest Palindromic Substring](https://leetcode.com/problems/longest-palindromic-substring/)  

- Solution 1: brute force (TLE)
    - enumerate all substrings O(n^2), check palindrome for each substring O(n)
    - Time complexity: O(n^3)
    - Space complexity: O(1)
- Solution 2: check palindrome from inside to outside.
    - loop the string once O(n), take the iterated character as the palindrome middle, expand l and r to check longer palindrome O(n), and we need to check for both odd length and even length palindrome.
    - Time complexity: O(n^2)
    - Space complexity: O(1)