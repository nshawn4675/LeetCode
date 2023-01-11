class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans = 0;

        for (int l = 0; l < height.size() - 1; l++) {
            for (int r = l + 1; r < height.size(); r++) {
                int h = min(height[l], height[r]);
                ans = max(ans, h * (r - l));
            }
        }

        return ans;
    }
};