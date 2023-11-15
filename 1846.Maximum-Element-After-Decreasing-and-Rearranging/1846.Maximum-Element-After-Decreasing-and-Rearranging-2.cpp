class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        const int n = arr.size();
        vector<int> counts(n+1, 0);

        // count the numbers, treat the num "n<num" as n
        for (int num: arr) {
            counts[min(num, n)]++;
        }

        int ans = 0;
        for (int num=1; num<=n; num++) {
            /* spots means how many vacancy can be filled */
            int spots = num - ans;

            if (spots < counts[num]) {
                /* if the vacancy is not enough,
                   it can only fit up to num.
                   e.g., [1, 3, 3, 3, 3]
                             ^^^^^^^^^^
                   spots between 1 and 3 is 2.
                   but there are four 3s
                   so can only form to: [1, 2, 3, 3, 3]
                                            ^^^^
                   can't form to optimal: [1, 2, 3, 4, 5]
                */
                ans = num;
            } else {
                /* if there is enough vacancy,
                   we can fit all the num in it.
                   e.g., [1, 5, 5, 5, 5]
                             ^^^^^^^^^^
                   spots between 1 and 5 is 4.
                   and there are 4 vacancies.
                   so can form to: [1, 2, 3, 4, 5]
                                       ^^^^^^^^^^
                */
                ans += counts[num];
            }
        }

        return ans;
    }
};