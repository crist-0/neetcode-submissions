class Solution {
public:

    void rec(vector<vector<int>>& res, int i, int t, vector<int>& nums, vector<int>& ar) {

        if(i == nums.size()) {
            if(t==0) {
                res.push_back(ar);
            }
            return;
        }
        if(i > nums.size() || t < 0) {
            return;
        }

        ar.push_back(nums[i]);
        rec(res, i, t-nums[i], nums, ar);
        ar.pop_back();
        rec(res, i+1, t, nums, ar);

    }

    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        vector<int> ar;
        rec(res, 0, target, nums, ar);

        return res;
    }
};
