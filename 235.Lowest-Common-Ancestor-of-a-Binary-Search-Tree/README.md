[Lowest Common Ancestor of a Binary Search Tree](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/)  

- Solution:
    - Since its a binary search tree already, trace from root, if p & q are greater/less than root, then go to right/left, until p & q are not at the same side.
    - Time complexity: O(h)
    - Space complexity: O(1)