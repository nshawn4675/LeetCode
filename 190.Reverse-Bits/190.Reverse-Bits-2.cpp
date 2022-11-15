class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int tbl[16] = {0, 8, 4, 12, 2, 10, 6, 14, 1, 9, 5, 13, 3, 11, 7, 15};
        int res = 0;
        for (int i=0 ; i<8; i++) {
            res = (res << 4) + tbl[n%16];
            n = n >> 4;
        }
        return res;
    }
};