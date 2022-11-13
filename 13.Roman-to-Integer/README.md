[13. Roman to Integer](https://leetcode.com/problems/roman-to-integer/)  

- Solution:
    - Loop from start to end.
        - IV = 4 = -1 +5
        - IX = 9 = -1 +10
        - XL = 40 = -10 +50
        - XC = 90 = -10 +100
        - CD = 400 = -100 +500
        - CM = 900 = -100 +1000
    - Time complexity: O(n)
    - Space complexity: O(1)