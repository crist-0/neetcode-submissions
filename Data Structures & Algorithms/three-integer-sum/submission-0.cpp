class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        set<vector<int>> s;
        for(int i=0; i<nums.size(); i++) {
            int j=i+1, k=nums.size()-1;
            while( j < k) {
                int sm = nums[i] + nums[j] + nums[k];
                if(sm == 0) {
                    vector<int> a = {nums[i], nums[j], nums[k]};
                    s.insert(a);
                    j++;
                    k--;
                }else if(sm < 0) {
                    j++;
                } else {
                    k--;
                }
            }
        }

        vector<vector<int>> res = {s.begin(), s.end()};
        return res;
    }
};
