class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        // sort the input array non-decreasing
        sort(arr.begin(), arr.end());

        int ans = 0; // use ans to count unique numbers
        for (int num: arr) {
            int expected = ans+1;

            /* if the num is less than the expected optimal num,
               then the num can't be decreased to it.
               optimal num: [1, 2, ..., n]
            */
            if (num < expected) continue;

            /* expected <= num, means the num can be decreased to
               the expected optimal num, so count it in.
            */
            ans++;
        }

        return ans;
    }
};