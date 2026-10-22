class Solution {
public:

    int rec(int r, int c, vector<vector<int>>& grid, vector<vector<int>>& dp) {

        if(r==0 && c==0) {
            return grid[0][0];
        }

        if(r < 0 || c < 0) {
            return 0;
        }

        if(dp[r][c] != -1) {
            return dp[r][c];
        }

        int ans = 1e7;

        if(r > 0) {
            ans = min(ans, grid[r][c] + rec(r-1, c, grid, dp));
        }

        if(c > 0) {
            ans = min(ans, grid[r][c] + rec(r, c-1, grid, dp));
        }

        return dp[r][c] = ans;
    }

    int minPathSum(vector<vector<int>>& grid) {
        int r = grid.size();
        int c = grid[0].size();

        vector<vector<int>> dp(r, vector<int> (c, -1));

        return rec(r-1, c-1, grid, dp);
    }
};