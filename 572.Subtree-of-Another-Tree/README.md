[Subtree of Another Tree](https://leetcode.com/problems/subtree-of-another-tree/)  

- Solution:
    - Check whether the node is the root of the subtree each by each.
    - Time complexity: O(mn) (m = # nodes of main tree, n = # nodes of subtree)
    - Space complexity: O(hn) (h = height of main tree)