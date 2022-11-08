class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        helper(image, sr, sc, image[sr][sc], color);
        return image;
    }
    void helper(vector<vector<int>>& image, int r, int c, int orig_color, int new_color) {
        if (r<0 || image.size()<=r || c<0 || image[0].size()<=c) return;
        if (image[r][c] != orig_color || image[r][c] == new_color) return;
        image[r][c] = new_color;
        helper(image, r+1, c, orig_color, new_color);
        helper(image, r-1, c, orig_color, new_color);
        helper(image, r, c+1, orig_color, new_color);
        helper(image, r, c-1, orig_color, new_color);
    }
};