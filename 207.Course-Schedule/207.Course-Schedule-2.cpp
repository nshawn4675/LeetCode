class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> indegree(numCourses, 0);
        vector<vector<int>> next(numCourses);
        queue<int> q;
        for (vector<int> p: prerequisites) {
            indegree[p[0]]++;
            next[p[1]].push_back(p[0]);
        }
        
        for (int i=0; i<numCourses; i++) {
            if (indegree[i] == 0) {
                q.push(i);
            }
        }

        while (!q.empty()) {
            int cur = q.front(); q.pop();
            for (int n: next[cur]) {
                indegree[n]--;
                if (indegree[n] == 0)
                    q.push(n);
            }
        }

        return accumulate(indegree.begin(), indegree.end(), 0) == 0;
    }
};