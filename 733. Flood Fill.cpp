class Solution {
private:
    void dfs(int row, int col,
             vector<vector<int>>& ans,
             vector<vector<int>>& image,
             int Color,
             int iniColor,
             int delRow[],
             int delCol[]) {

        ans[row][col] = Color;

        int n = image.size();
        int m = image[0].size();

        for (int i = 0; i < 4; i++) {
            int nrow = row + delRow[i];
            int ncol = col + delCol[i];

            if (nrow >= 0 && nrow < n &&
                ncol >= 0 && ncol < m &&
                image[nrow][ncol] == iniColor &&
                ans[nrow][ncol] != Color) {

                dfs(nrow, ncol, ans, image, Color, iniColor, delRow, delCol);
            }
        }
    }

public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {

        int iniColor = image[sr][sc];

        
        if (iniColor == color) return image;

        vector<vector<int>> ans = image;

        int delRow[] = {-1, 0, 1, 0};
        int delCol[] = {0, 1, 0, -1};

        dfs(sr, sc, ans, image, color, iniColor, delRow, delCol);

        return ans;
    }
};
