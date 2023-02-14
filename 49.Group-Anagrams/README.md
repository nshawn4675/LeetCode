[49. Group Anagrams](https://leetcode.com/problems/group-anagrams)  

- Solution 1: hash map
    - use a hash map to store sorted string to its group.
    - Time complexity: O(m*nlogn) (m=strs.size(), n=str.size())
    - Space complexity: O(m*n)