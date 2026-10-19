class Solution {
public:

    int rec(int i, int w, int t, vector<int>& nums, vector<vector<int>>& dp, int ts) {
        if(i==nums.size()) {
            if(w==t){
                return 1;
            } else {
                return 0;
            }
        }

        if(dp[i][w+ts] != INT_MIN) {
            return dp[i][w+ts];
        }

        int ans = rec(i+1, w-nums[i], t, nums, dp, ts) + rec(i+1, w+nums[i], t, nums, dp, ts);

        return dp[i][w+ts] = ans;
    }

    int findTargetSumWays(vector<int>& nums, int target) {
        int totalSum = accumulate(nums.begin(), nums.end(), 0);
        vector<vector<int>> dp(nums.size(), vector<int> (2*totalSum+1, INT_MIN));

        return rec(0, 0, target, nums, dp, totalSum);
    }
};
