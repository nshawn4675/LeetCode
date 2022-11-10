[Reverse Linked List](https://leetcode.com/problems/reverse-linked-list/)  

- Solution:
    - steps
        1. retain next first.
        2. assign next to pre. (reverse)
        3. assign pre to cur.
        4. assign cur to original next.
    - Time complexity: O(n)
    - Space complexity: O(1)