[76. Minimum Window Substring](https://leetcode.com/problems/minimum-window-substring/)  

- Solution 1: brute force (TLE)
    - Use two hash map to record current word count and target word count, enumerate all possible substrings, check whether the word count for each substring meets the target, then find the minimum one.
    - Time complexity: O(m^2*n)
    - Space complexity: O(m+n)
- Solution 2: sliding window
    - extend the sliding window with right pointer until it meets the target, then contract the sliding window with left pointer until it don't meet the target, then continue to extend the sliding window, find the minimum one.
    - Time complexity: O(2m)
    - Space complexity: O(m+n)