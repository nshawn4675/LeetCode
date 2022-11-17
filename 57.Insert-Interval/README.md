[Insert Interval](https://leetcode.com/problems/insert-interval/)  

- Solution:
    - Before the intervals need to be merge (interval[i][1] < newInterval[0]), just push into result. During the intervals need to be merge (before newInterval[1] < interval[i][0]), we calculate the minimun starting point and maximum ending point. After the intervals need to be merge (remaining intervals), just push into result.
    - Time complexity: O(n)
    - Space complexity: O(n)