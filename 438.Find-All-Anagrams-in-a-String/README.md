[438. Find All Anagrams in a String](https://leetcode.com/problems/find-all-anagrams-in-a-string/)

- Solution 1: brute force (TLE)
    - check all length p.size() substrings 1 by 1.
    - Time complexity: O(n*m) (n=s.size(), m=p.size())
    - Space complexity: O(1)
- Solution 2: sliding window
    - check all length p.size() substrings 1 by 1, but only add new character and remove old character.
    - Time complexity: O(n) (n=s.size())
    - Space complexity: O(1)