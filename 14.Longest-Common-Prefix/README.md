[Longest Common Prefix](https://leetcode.com/problems/longest-common-prefix/)  

- Solution 1: nested loop
    - Use double loop to check each word from head to tail.
    - Time complexity: O(n*l)
    - Space compplexity: O(1)
- Solution 2: Sort strings
    - After sorting strings, just need to compare the first and the last strings which are the most different strings in the strings, then compare these two strings.
    - Time complexity: O(l*nlogn)
    - Space complexity: O(1)
- Solution 3: Trie
    - Use trie to store all the strings, then find the first one which has multiple children.
    - Time complexity: O(n*l)
    - Space complexity: O(n*l)