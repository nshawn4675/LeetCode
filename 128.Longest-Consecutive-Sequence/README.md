[128. Longest Consecutive Sequence](https://leetcode.com/problems/longest-consecutive-sequence/)  

- Solution 1: brute force (TLE)
    - for each number in nums, calculate its longest consecutive sequence. To calculate its longest consecutive sequence, check whether number + 1 is in nums.
    - Time complexity: O(n^3)
    - Space complexity: O(1)
- Solution 2: sort (pass but not qualified)
    - after sorting, check nums[i-1] and nums[i] to calculate longest consecutive sequence.
    - Time complexity: O(nlogn)
    - Space complexity: O(1) / O(n) (if in-place sorting is not allowed)
- Solution 3: hash set
    - use hash set to store nums (**search in hash set is O(1)**), for each starting number (nums[i]-1 is not in nums), calculate its longest consecutive sequence, though there are two loops in this solution, but it only take O(n).
    - Time complexity: O(n)
    - Space complexity: O(n)