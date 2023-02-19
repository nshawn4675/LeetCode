[179. Largest Number](https://leetcode.com/problems/largest-number/)  

- Solution 1: 
    - Let all the element to be a string, then sort the str array, bit to small, and we need the result that str a + str b is greater than str b + str a, after the str array is sorted, it means that if we combine the elements in the str array directly, the result is what we want, if the largest number (0 idx in sorted str array) is 0, then the remaining number is 0 too, the ans should be "0".
    - Time complexity: O(nlogn)
    - Space complexity: O(n)