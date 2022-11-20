[Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/)  

- Solution: Sliding Window
    - A sliding window "start ~ end" represents the longest substring without repeating characters for now. Use an array to store the index of last seen character, if the character at "end" is seen before, change starting point to last_seen[end]+1, so that "start~end" will be a new substring without repeating characters.
    - Time complexity: O(n)
    - Space complexity: O(n)