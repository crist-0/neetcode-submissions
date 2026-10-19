class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> st;
        int l=0,r=0,mx=0;

        while(r < s.size()) {
            if(st.find(s[r]) == st.end()) {
                st.insert(s[r]);
                r++;
            } else {
                st.erase(s[l]);
                l++;
            }
            mx = max(mx, r-l);
        }

        return mx;
    }
};
