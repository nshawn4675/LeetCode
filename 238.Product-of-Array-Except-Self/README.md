[Product of Array Except Self](https://leetcode.com/problems/product-of-array-except-self/)  

- Solution 1:
    - Use two arrays to store the product
        - from left to right (prefix)
        - from right to left (postfix)
        - ans = prefix * postfix
    - Time complexity: O(n)
    - Space complexity: O(n)
- Solution 2:
    - iterate 2 times, one for prefix, one for postfix
    - Time complexity: O(n)
    - Space complexity: O(1)