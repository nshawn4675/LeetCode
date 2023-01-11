[]()  

- Solution 1: brute force (TLE)
    - enumerate all the possible answer.
    - Time complexity: O(n^2)
    - Space complexity: O(1)
- Solution 2:
    - Starts from widest container, then if we want to have the oppurtunity to get more water, we need to move the shorter one to give it a try.
    - Time complexity: O(n)
    - Space complexity: O(1)