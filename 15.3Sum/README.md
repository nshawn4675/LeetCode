[3Sum](https://leetcode.com/problems/3sum/)  

- Solution: Two Pointers
    - It can be teated as 2 sum problem, since the 3 sum needs to be 0, so use -nums[i] as target, and the other 2 numbers do the 2 sum.
    - Time complexity: O(nlogn)
    - Space complexity: O(1)