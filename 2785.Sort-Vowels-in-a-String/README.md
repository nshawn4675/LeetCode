[Sort Vowels in a String](https://leetcode.com/problems/sort-vowels-in-a-string/description/)  

- Solution 1: Sorting
    - Use a 'tmp' string to store all vowels, sort 'tmp', replace the origin vowel with sorted one.
    - Time complexity: O(nlogn)
    - Space complexity: O(n)
- Solution 2: Bucket sort
    - Use a map to store counts of each vowel, then replace the origin vowel with smallest one in the map.
    - Time complexity: O(n)
    - Space complexity: O(1)