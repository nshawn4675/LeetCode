[Single Number](https://leetcode.com/problems/single-number/)  

- Solution: XOR
    - Due to every word is appeared exactly twice except the single number, we can xor all the numbers, except the single number, other numbers will be eliminated by itself.
    - Time complexity: O(n)
    - Space complexity: O(1)