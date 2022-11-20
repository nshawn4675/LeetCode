[Course Schedule](https://leetcode.com/problems/course-schedule/)  

- Solution 1: DFS
    - Use next to store graph path, visited to store visit status. All courses can be taken except a cycle exists. Traverse through all course, if there's a cycle exists, then all courses can't be taken.
    - Time complexity: O(n)
    - Space complexity: O(n)
- Solution 2: BFS
    - Record the in-degree of each course, then eliminates the course which in-degree is 0 one by one (the indegree of next element will decrease by 1). In the end, the courses which in-degree are not 0 form a cycle (the sum of indegree of all courses are not 0).
    - Time complexity: O(n)
    - Space complexity: O(n)