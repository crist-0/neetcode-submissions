class Solution {
public:
    void rec(vector<vector<int>>& res,vector<int>& tmp, vector<int> ar, int i) {
        if(i==ar.size()) {
            res.push_back(tmp);
            return;
        }
        rec(res,tmp, ar, i+1);
        tmp.push_back(ar[i]);
        rec(res,tmp,ar,i+1);
        tmp.pop_back();
        return;
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> tmp;
        rec(res, tmp, nums, 0);
        return res;
    }
};
