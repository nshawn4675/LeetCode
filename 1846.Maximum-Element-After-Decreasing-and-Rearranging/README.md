[Maximum Element After Decreasing and Rearranging](https://leetcode.com/problems/maximum-element-after-decreasing-and-rearranging/description/)  

- Because we can only do decreasing and rearranging, so the optimal answer would be an increasing array like [1, 2, ..., n] which the answer is n.
- Solution 1: Sorting
    -  First we sort the input array, then count how long can we go through from 1 to n, for each num in sorted input, it should be bigger/equal to the expected optimal num, so that the num can be decreased to the expected optimal num.
    - Time complexity: O(nlogn)
    - Space complexity: O(logn)
- Solution 2: counts
    - Instead of sorting, count the frequency of each num first. Then introduce a concept, spots, which is vacancies between cur ans and num (num - ans). Check the frequency of num and the spots, can all nums be fitted into spots? If it can't, it can only form to [..., ans+1, ans+2, ..., num, num, num, ...], so ans=num. If it can, it can form to [..., ans+1, ans+2, ..., ans+nums], so ans=ans+count[num].
    - Time complexity: O(n)
    - Space complexity: O(n)