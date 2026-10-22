class Solution {
public:

    int rec(int m, int n, vector<vector<int>>& dp) {
        if(m==0 && n==0) {
            return 1;
        }

        if(dp[m][n] != -1) {
            return dp[m][n];
        }

        int ans = 0;
        if(m > 0 ) {
            ans = rec(m-1, n, dp);
        }

        if( n > 0) {
            ans += rec(m, n-1, dp);
        }

        return dp[m][n] = ans;
    }

    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m, vector<int> (n, -1));

        return rec(m-1, n-1, dp);

    }
};
