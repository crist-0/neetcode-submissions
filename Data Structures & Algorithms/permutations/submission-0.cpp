class Solution {
public:

    void rec(vector<vector<int>>& ans, vector<int>& t, int j) {
        if(j==t.size()) {
            ans.push_back(t);
            return;
        }

        for(int i=j;i<t.size();i++) {
            swap(t[i],t[j]);
            rec(ans, t, j+1);
            swap(t[i],t[j]);
        }

    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        rec(ans, nums, 0);
        return ans;
    }
};
