class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sm = nums[0];

        int lst = nums[0];

        for(int i=1; i<nums.size(); i++) {
            if(lst <= 0) {
                lst = nums[i];
            }else {
                lst = lst + nums[i];
            }
            sm = max(sm, lst);
        }
        return sm;
    }
};
