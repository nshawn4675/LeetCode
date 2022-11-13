class Solution {
public:
    int hammingWeight(uint32_t n) {
        int res = 0;
        while (0 < n) {
            n = n & (n-1);
            res++;
        }
        return res;
    }
};