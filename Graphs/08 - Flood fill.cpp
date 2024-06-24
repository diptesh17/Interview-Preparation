
class Solution {
public:
    void DFS(vector<vector<int>>& image, int i, int j, int color, int original_color) {
        if (i < 0 || i >= image.size() || j < 0 || j >= image[0].size() || image[i][j] != original_color) {
            return;
        }

        image[i][j] = color;

        DFS(image, i + 1, j, color, original_color);
        DFS(image, i - 1, j, color, original_color);
        DFS(image, i, j - 1, color, original_color);
        DFS(image, i, j + 1, color, original_color);
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int original_color = image[sr][sc];

        if (original_color == color) {
            return image;
        }

        DFS(image, sr, sc, color, original_color);

        return image;
    }
};
