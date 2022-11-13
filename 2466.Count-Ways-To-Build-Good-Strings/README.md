[Count Ways To Build Good Strings](https://leetcode.com/problems/count-ways-to-build-good-strings/)  

- Solution: DP (Bottom-up)
    - "the way to build good strings for len n" = "the way to build good strings for len n-zero (then concat with zeros)" + "the way to build good strings for len n-one (then concat with ones)"
    - Time complexity: O(high)
    - Space complexity: O(high)