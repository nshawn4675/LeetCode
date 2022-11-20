[Implement Trie (Prefix Tree)](https://leetcode.com/problems/implement-trie-prefix-tree/)  

- Solution:
    - Define node structure in the trie.
        - is_word
            - means is this a inserted word from root to this node?
        - next
            - means the next character of a inserted word.
    - Time complexity: O(l)
    - Space complexity: O(l)