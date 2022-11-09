[Balanced Binary Tree](https://leetcode.com/problems/balanced-binary-tree/)  

- Solution: DFS - Button up
    - Use a helper function to calculate left & right height, then check whether the node is balanced by "abs(l_h-r_h) <= 1".
    - Time complexity: O(n)
    - Space complexity: O(h)