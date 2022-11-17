class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> res(k);
        priority_queue<vector<int>> max_heap;
        
        for (int i=0; i<points.size(); i++) {
            int x = points[i][0];
            int y = points[i][1];
            max_heap.push({x*x+y*y, x, y});
            if (k < max_heap.size())
                max_heap.pop();
        }

        for (int i=0; i<k; i++) {
            vector<int> point = max_heap.top(); max_heap.pop();
            res[i] = {point[1], point[2]};
        }

        return res;
    }
};