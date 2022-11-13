class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int i=0, m=0;
        for (int x: nums) {
            if (i == 0) {
                m = x;
                i = 1;
            } else if (m == x) {
                i++;
            } else {
                i--;
            }
        }
        return m;
    }
};