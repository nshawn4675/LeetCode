class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        const int n = gas.size();
        for (int start = 0; start < n; start++) {
            int idx = start;
            int cur_gas = 0;
            bool pass = true;
            for (int i = 0; i < n; i++) {
                cur_gas  = cur_gas + gas[idx] - cost[idx];
                if (cur_gas < 0) {
                    pass = false;
                    break;
                }
                idx = (idx + 1) % n;
            }
            if (pass) return start;
        }
        return -1;
    }
};