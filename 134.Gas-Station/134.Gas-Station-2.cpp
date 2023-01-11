class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int total_gas = 0, total_cost = 0;
        for (int g: gas) total_gas += g;
        for (int c: cost) total_cost += c;
        if (total_gas < total_cost) return -1;

        int ans = 0;
        int cur_gas = 0;
        for (int i = 0; i < gas.size(); i++) {
            cur_gas = cur_gas + gas[i] - cost[i];
            if (cur_gas < 0) {
                ans = i + 1;
                cur_gas = 0;
            }
        }
        return ans;
    }
};