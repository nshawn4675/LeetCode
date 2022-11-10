[Longest Palindrome](https://leetcode.com/problems/longest-palindrome/)  

- Solution:
    - Use an array to count the freq of each word, if the freq of a word is even, take all of it to used as a mirror. If the freq of a word is odd, take freq-1 of it to used as a mirror, and take note that one word can be used as a middle.
    - Time complexity: O(n)
    - Space complexity: O(1)