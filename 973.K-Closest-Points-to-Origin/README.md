[K Closest Points to Origin](https://leetcode.com/problems/k-closest-points-to-origin/)  

- Solution: Max Heap
    - Use max heap to store distance, if the size of max heap is larger than k, pop the root to keep the size of max heap is k, so that the max heap will be the k closest distances eventually.
    - Time complexity: O(nlogk)
    - Space complexity: O(k)