class Solution {
public:

    int rec(int i, vector<int>& nums, vector<int>& dp) {
        
        if(dp[i] != -1) {
            return dp[i];
        }

        int ans = 1;


        for(int j=i; j<nums.size(); j++) {
            if(nums[j] > nums[i]) {
                ans = max(ans, 1+rec(j, nums, dp));
            }
        }

        return dp[i] = ans;
    }

    int lengthOfLIS(vector<int>& nums) {
        int mx = 0;
        vector<int> dp(nums.size(), -1);
        for(int i=0; i<nums.size(); i++) {
            mx = max(mx, rec(i, nums, dp));
        }
        return mx;
    }
};
