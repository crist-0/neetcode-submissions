class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l=0,r=numbers.size()-1;

        while(l < r) {
            int nm = numbers[l] + numbers[r];
            if(nm == target) {
                return {l+1,r+1};
            }else if(nm < target) {
                l++;
            }else {
                r--;
            }
        }
        return {l+1, r+1};
    }
};
