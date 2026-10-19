class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> mp;
        for(auto a: s) {
            mp[a]++;
        }

        for(auto a: t) {
            mp[a]--;
            if(mp[a] == 0) {
                mp.erase(a);
            }
        }

        return mp.size() == 0;
    }
};
