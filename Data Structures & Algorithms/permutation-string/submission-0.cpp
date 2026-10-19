class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        map<char,int> mp;
        map<char,int> mp1;

        for(auto a: s1) {
            mp[a]++;
        }

        int l=0,r=0;
        bool f = false;
        for(r=0; r<s2.size(); r++) {
            mp1[s2[r]]++;
            if((r-l)+1 == s1.size()) {
                if(mp == mp1) {
                    f = true;
                    break;
                } else {
                    mp1[s2[l]]--;
                    if(mp1[s2[l]] == 0) {
                        mp1.erase(s2[l]);
                    }
                    l++;
                }
            } 
        }
        return f;

    }
};
