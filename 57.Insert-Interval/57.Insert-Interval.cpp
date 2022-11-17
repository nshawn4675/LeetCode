class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int i=0;
        const int n = intervals.size();
        vector<vector<int>> res;

        // before the intervals needs to be merge.
        while (i<n && (intervals[i][1]<newInterval[0])) {
            res.push_back(intervals[i]);
            i++;
        }

        // during the intervals needs to be merge.
        while (i<n && !(newInterval[1] < intervals[i][0])) {
            newInterval[0] = min(intervals[i][0], newInterval[0]);
            newInterval[1] = max(intervals[i][1], newInterval[1]);
            i++;
        }
        res.push_back(newInterval);

        // after the intervals needs to be merge.
        while (i<n) {
            res.push_back(intervals[i]);
            i++;
        }

        return res;
    }
};