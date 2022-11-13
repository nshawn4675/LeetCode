[Counting Bitse](https://leetcode.com/problems/counting-bits/)  

- Solution 1: __builtin_popcount
    - Use builtin popcount to count bits for each number.
    - Time complexity: O(nlogn)
    - Space complexity: O(n)
- Solution 2: odd/even number
    - The bit count of even numbers equal to the number which been right shift by 1 bit, e.g., 10 = 1010, 5 = 101. The bit count of odd numbers equal to the previous even number plus 1 to the tail.
    - Time complextiy: O(n)
    - Space complexity: O(n)
