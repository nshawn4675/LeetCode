class Solution {
public:
    int hammingWeight(uint32_t n) {
        int res = 0;
        while (0 < n) {
            res += n % 2;
            n /= 2;
        }
        return res;
    }
};