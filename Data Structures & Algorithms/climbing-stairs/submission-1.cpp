class Solution {
public:


    int rec(int i, int n, vector<int>& dp) {
        if(i==n) {
            return 1;
        }

        if(i > n) {
            return 0;
        }

        if(dp[i] != -1) {
            return dp[i];
        }

        int ans = rec(i+1, n, dp) + rec(i+2, n, dp);

        return dp[i] = ans;
    }

    int climbStairs(int n) {
        vector<int> dp(n, -1);
        return rec(0, n, dp);
    }
};
