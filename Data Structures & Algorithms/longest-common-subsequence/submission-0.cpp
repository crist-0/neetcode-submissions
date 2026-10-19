class Solution {
public:

    int rec(string s1, string s2, int i, int j, vector<vector<int>>& dp) {

        if(i==s1.size() || j == s2.size()) {
            return 0;
        }

        if(dp[i][j] != -1) {
            return dp[i][j];
        }

        int ans = rec(s1, s2, i+1,j+1, dp);

        ans = max(ans, rec(s1, s2, i+1, j, dp));
        ans = max(ans, rec(s1, s2, i, j+1, dp));

        if(s1[i] == s2[j]) {
            ans = max(ans, 1+rec(s1, s2, i+1, j+1, dp));
        }

        return dp[i][j] = ans;
    }


    int longestCommonSubsequence(string text1, string text2) {
        vector<vector<int>> dp(text1.size(), vector<int> (text2.size(), -1));
        return rec(text1, text2, 0, 0, dp);
    }
};
