class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> s = {nums.begin(), nums.end()};
        int mx = 0;
        for(auto a: nums) {
            int el = a;
            int c = 0;
            if(s.find(el-1) == s.end()) {
                while(s.find(el) != s.end()) {
                    c++;
                    el++;
                }
            }
            mx = max(mx, c);
        }
        
        return mx;
    }
};
