class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>> mp;
        for(auto a: strs) {
            string s = a;
            sort(s.begin(), s.end());
            mp[s].push_back(a);
        }

        vector<vector<string>> ans;

        for(auto [k,v]: mp) {
            ans.push_back(v);
        }

        return ans;
    }
};
