class Solution {
public:
    int characterReplacement(string s, int k) {
        
        int l=0,r=0,chars_to_replace=0,max_freq=0,mx=0;
        map<char,int> mp;

        for(r=0; r<s.size(); r++) {
            mp[s[r]]++;
            max_freq = max(mp[s[r]], max_freq);
            chars_to_replace = (r-l+1)-max_freq;
            if(chars_to_replace > k) {
                mp[s[l]]--;
                l++;
            }
            mx = max(mx, r-l+1);
        }

        return mx;
    }
};
