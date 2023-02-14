[424. Longest Repeating Character Replacement](https://leetcode.com/problems/longest-repeating-character-replacement/)  

- Solution 1: sliding window
    - Use a extend/shrink sliding window to check whether current substring is valid by swapping k chars. We extend the window, the window is valid if we can swap at most k chars to the maximum freq char in current window. If the count of chars need to be swapped ((r-l+1) - maxf) is greater and equal than k, then we shrink the window until we can form a valid window.
    - Note: This solution can be optimized further by removing the update of maxf when shrinking window. 
    - Time complexity: O(n)
    - Space complexity: O(1)