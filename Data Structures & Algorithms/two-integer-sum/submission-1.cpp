class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp;

        for(int i=0; i<nums.size(); i++) {
            if(mp.find(target-nums[i]) != mp.end()) {
                vector<int> res = {i, mp[target-nums[i]]};
                sort(res.begin(), res.end());
                return res;
            } else {
                mp[nums[i]] = i;
            }
        }

    }
};
