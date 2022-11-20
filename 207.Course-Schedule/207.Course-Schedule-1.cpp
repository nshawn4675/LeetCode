class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        visited = vector<int>(numCourses, 0);    // 1: tmp visit, 2: visited
        next = vector<vector<int>>(numCourses);
        for (vector<int> p: prerequisites) {
            next[p[1]].push_back(p[0]);
        }

        for (int i=0; i<numCourses; i++) {
            if (is_cycle_exist(i)) return false;
        }

        return true;
    }
private:
    vector<int> visited;
    vector<vector<int>> next;
    bool is_cycle_exist(int cur) {
        if (visited[cur] == 1) return true;
        if (visited[cur] == 2) return false;
        visited[cur] = 1;
        for (int n: next[cur]) {
            if (is_cycle_exist(n)) return true;
        }
        visited[cur] = 2;
        return false;
    }
};