[239. Sliding Window Maximum](https://leetcode.com/problems/sliding-window-maximum/)  

- Solution 1: brute force (TLE)
    - Simulate sliding window, find each max_num.
    - Time complexity: O(k^2)
    - Space complexity: O(1)
- Solution 2: multiset
    - Use multiset as sliding window, multiset is typically implemented as BST (Binary Search Tree), the operation time complextiy of a balanced BST like AVL tree or Red-Black tree is O(logN) (insert, search, delete).
    - Time complexity: O(nlogk)
    - Space complexity: O(k)
- Solution 3: double ended queue
    - Use a double ended queue to store the index of the maximun number in the sliding window, and nums[q[0]] > nums[q[1]] > ... . Besides, the time complexity of insert and delete front/back element in deque are O(1).
    - Time complexity: O(n)
    - Space complexity: O(k)