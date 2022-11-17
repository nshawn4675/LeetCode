[Maximum Subarray](https://leetcode.com/problems/maximum-subarray/)  

- Solution: kadane's algorithm
    - concept: nums[i] as a new start or sum prev together, if sum prev will lower nums[i] itself, it will start on its own.
    - Time complexity: O(n)
    - Space complexity: O(1)