class Solution {
public:

    int rec(int i, int sm, vector<int>& coins, vector<vector<int>>& dp) {
        if(i==coins.size()) {
            if(sm == 0) {
                return 1;
            }else {
                return 0;
            }
        } 

        if(dp[i][sm] != -1) {
            return dp[i][sm];
        }

        int ans = 0;

        ans += rec(i+1, sm, coins, dp);

        if(sm-coins[i] >= 0) {
            ans += rec(i, sm-coins[i], coins, dp);
        }

        return dp[i][sm] = ans;
    }


    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        vector<vector<int>> dp(n, vector<int> (1e5, -1));

        int a = rec(0, amount, coins, dp);

        return a;
    }
};
