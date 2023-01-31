[435. Non-overlapping Intervals]()  

- Solution 1: brute force (TLE)
    - enumerate all combinations of intervals to form a non-overlapping intervals.
    - Time complexity: O(2^n)
    - Space complexity: O(n)
- Solution 2: calculate erased intervals
    - sort all intervals by end first, then iterate through it once, check whether next interval is overlapped, if not overlapped (prev_end <= interval[0]), then update prev_end, if overlapped (interval[0] < prev_end), then we remain the one which ends earlier, so that it has minor chance to overlap next interval.
    - Time complexity: O(nlogn)
    - Space complexity: O(1)