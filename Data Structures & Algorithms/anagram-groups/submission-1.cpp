class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> mp;

        for(auto a: strs) {
            string s = a;
            sort(s.begin(), s.end());
            mp[s].push_back(a);
        }

        vector<vector<string>> res;

        for(auto [k,v]: mp) {
            res.push_back(v);
        }


        return res;
    }
};
