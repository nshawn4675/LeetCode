class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), [](vector<int>& a, vector<int>& b){
            return a[1] < b[1];
        });
        int erased = 0;
        int prev_end = INT_MIN;
        for (vector<int> interval: intervals) {
            if (prev_end <= interval[0]) {
                prev_end = interval[1];
            } else {
                erased++;
                /* no need, because already sorted by end */
                // prev_end = min(prev_end, interval[1]);
            }
        }
        return erased;
    }
};