class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_so_far = INT_MAX;
        int max_profit_so_far = 0;
        for (int p: prices) {
            max_profit_so_far = max(max_profit_so_far, p-min_so_far);
            min_so_far = min(min_so_far, p);
        }
        return max_profit_so_far;
    }
};