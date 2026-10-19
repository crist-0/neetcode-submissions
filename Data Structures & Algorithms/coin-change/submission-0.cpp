#include <cstring>
class Solution {
public:

    int rec(vector<vector<int>>& dp, vector<int>& cns, int i, int sm) {
        if(i==cns.size()) {
            if(sm == 0) {
                return 0;
            } else {
                return 1e5;
            }
        }

        if(dp[i][sm] != -1) {
            return dp[i][sm];
        }

        int ans = 1e5;

        ans = rec(dp, cns, i+1, sm);

        if(sm-cns[i] >= 0) {
            ans = min(ans, 1+rec(dp, cns,i,sm-cns[i]));
        }

        return dp[i][sm] = ans;
    }


    int coinChange(vector<int>& coins, int amount) {
        
        vector<vector<int>> dp(coins.size(), vector<int> (1e5, -1));

        int ans = rec(dp, coins, 0, amount);

        if(ans >= 1e5) {
            return -1;
        } else {
            return ans;
        }

    }
};
