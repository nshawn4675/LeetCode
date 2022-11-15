[Missing Number](https://leetcode.com/problems/missing-number/)  

- Solution 1: XOR
    - Due to 0 ~ nums.size()-1 and nums[i] (0~nums.size()) are present twice, the missing number which just present once can be found by using xor.
    - Time complexity: O(n)
    - Space complexity: O(1)
- Solution 2: SUM
    - The sum of increasing numbers can be calculated by "sum = n*(n+1)/2", then minus the sum of nums array, we can find the missing number.
    - Time complexity: O(n)
    - Space complexity: O(1)