class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> s;
        for(auto a: nums) {
            s.insert(a);
        }

        return s.size() != nums.size();
    }
};