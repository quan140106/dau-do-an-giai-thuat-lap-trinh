class Solution {
public:

    int rows, cols;

    void dfs(vector<vector<int>>& image,
             int r,
             int c,
             int startColor,
             int color) {

        if (
            r < 0 || c < 0 ||
            r >= rows || c >= cols ||
            image[r][c] != startColor
        ) {
            return;
        }

        image[r][c] = color;

        dfs(image, r + 1, c,
            startColor, color);

        dfs(image, r - 1, c,
            startColor, color);

        dfs(image, r, c + 1,
            startColor, color);

        dfs(image, r, c - 1,
            startColor, color);
    }

    vector<vector<int>> floodFill(
        vector<vector<int>>& image,
        int sr,
        int sc,
        int color
    ) {

        rows = image.size();

        cols = image[0].size();

        int startColor = image[sr][sc];

        if (startColor == color)
            return image;

        dfs(image, sr, sc,
            startColor, color);

        return image;
    }
};