class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ar(nums.size(),1);
        vector<int> ar1(nums.size(),1);

        for(int i=1; i<nums.size(); i++) {
            ar[i] = ar[i-1] * nums[i-1];
        }

        ar1[nums.size()-1] = 1;

        for(int i=nums.size()-2; i >= 0; i--) {
            ar1[i] = ar1[i+1] * nums[i+1];
        }

        for(int i=0; i<ar.size(); i++) {
            nums[i] = ar1[i] * ar[i];
        }

        return nums;
    }
};
