[56. Merge Intervals](https://leetcode.com/problems/merge-intervals/)

- Solution:
    1. sort intervals by interval[0] nondecreasingly.
    2. check each interval, determine merge or not.
        - if interval_a[1] < interval_b[0], don't merge.
        - if interval_b[0] <= interval_a[1], merge.
            - merge: interval_a[1] = max(interval_a[1], interval_b[1]);
    - Time complexity: O(nlogn)
    - Space complexity: O(n)