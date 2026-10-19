class Solution {
public:
    int rec(int i, int j, string s1, string s2, vector<vector<int>>& dp) {
        if(i==s1.size()) {
            return s2.size()-j;
        }

        if(j==s2.size()) {
            return s1.size()-i;
        }

        if(dp[i][j] != -1) {
            return dp[i][j];
        }

        if(s1[i] == s2[j]) {
            return rec(i+1, j+1, s1, s2, dp);
        }

        int ans;

        ans = min(rec(i, j+1, s1, s2, dp), rec(i+1, j, s1, s2, dp));
        ans = min(ans, rec(i+1, j+1, s1, s2, dp));

        return dp[i][j] = ans+1;

    }

    int minDistance(string word1, string word2) {
        vector<vector<int>> dp(word1.size(), vector<int> (word2.size(), -1));

        return rec(0, 0, word1, word2, dp);
    }
};
