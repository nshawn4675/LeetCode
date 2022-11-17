class Solution {
private:
    bool is_range_valid(int rows, int cols, int r, int c) {
        return !(r<0 || rows<=r || c<0 || cols<=c);
    }
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        const int rows = mat.size();
        const int cols = mat[0].size();
        vector<vector<int>> res(rows, vector<int>(cols, -1));
        vector<int> dir = {1, 0, -1, 0, 1};
        queue<pair<int, int>> q;
        for (int r=0; r<rows; r++) {
            for (int c=0; c<cols; c++) {
                if (mat[r][c] == 0) {
                    q.push({r, c});
                    res[r][c] = 0;
                }
            }
        }
        while (!q.empty()) {
            pair<int, int> cur = q.front(); q.pop();
            for (int d=1; d<dir.size(); d++) {
                int y = cur.first + dir[d-1];
                int x = cur.second + dir[d];
                if (!is_range_valid(rows, cols, y, x) || (res[y][x] != -1))
                    continue;
                q.push({y, x});
                res[y][x] = res[cur.first][cur.second] + 1;
            }
        }
        return res;
    }
};