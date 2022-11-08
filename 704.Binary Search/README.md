[Binary Search](https://leetcode.com/problems/binary-search/)  

- Solution: Binary Search
    - Use "mid=l+(r-l)/2" to avoid overflow, if "nums[mid] < target" then search right side, else if "target < nums[mid]", then search then search left side, else (target == nums[mid]) is the target, otherwise not found (-1).
    - Time complexity: O(logn)
    - Space complexity: O(1)