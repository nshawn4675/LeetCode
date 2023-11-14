[Unique Length-3 Palindromic Subsequences](https://leetcode.com/problems/unique-length-3-palindromic-subsequences/description/)  

- Solution 1: brute force (TLE)
    - Use triple nested for loop to iterate through all length-3 palindromes.
    - Time complexity: O(n^3)
    - Space complexity: O(n)
- Solution 2: Count Letters In-Between
    - collect all unique letters in s, for each unique letters in s, find the first and last one as maximized palindrome range, count the number of unique letters between first and last.
    - Time complexity: O(n)
    - Space complexity: O(1)
- Solution 3: Pre-Compute First and Last Indices
    - same idea with solution 2, but use extra space to record first and last position of the letters in s when doing the first loop.
    - Time complexity: O(n)
    - Space complexity: O(1)