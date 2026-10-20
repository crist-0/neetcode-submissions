class Solution {
public:

    int rec(int i, vector<int>& nums, vector<int>& dp) {

        if(i == 0) {
            return nums[0];
        }

        if(i < 0) {
            return 0;
        }

        if(dp[i] != -1) {
            return dp[i];
        }

        int ans = rec(i-1, nums, dp);

        ans = max(ans, nums[i]+rec(i-2,nums, dp));

        return dp[i]= ans;
    }

    int rob(vector<int>& nums) {


        vector<int> dp(nums.size(),-1);

        return rec(nums.size()-1, nums, dp);
    }
};
