[Linked List Cycle](https://leetcode.com/problems/linked-list-cycle/)  

- Solution: Slow & Fast Pointers
    - Use a two pointers, slow and fast, to travel the linked list. If fast pointer reached the end, the cycle not exists. If the fast pointer cycle back and meet slow pointer, the cycle exists.
    - Time complexity: O(n)
    - Space complexity: O(1)