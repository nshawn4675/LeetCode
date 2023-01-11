[]()  

- Solution 1: count
    - count each color, then replace one by one.
    - Time complexity: O(n)
    - Space complexity: O(1)
- Solution 2: 3 pointers
    - l indicates 0, starts from begin; m indicates 1; r indicates 2, starts from end. If nums[m] is 0 then swap with l, if nums[m] is 2 then swap with r. Use m to iterates nums from starts to over r.
    - Time complexity: O(n)
    - Space complexity: O(1)