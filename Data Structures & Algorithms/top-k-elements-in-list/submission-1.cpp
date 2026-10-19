class Solution {
public:

    bool static cmp (pair<int,int> a, pair<int,int> b) {
        return a.second > b.second;
    }

    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mp;
        for(auto a: nums) {
            mp[a]++;
        }

        vector<pair<int,int>> pr;

        for(auto [k,v]: mp) {
            pr.push_back({k,v});
        }

        sort(pr.begin(), pr.end(), cmp);
        int i=0;
        vector<int> ans;
        for(auto [ke,v]: pr) {

            if(i==k) {
                break;
            }
            ans.push_back(ke);
            i++;
        }

        return ans;
    }
};
