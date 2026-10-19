class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> st;
        int l=0,r=0,mx=0;

        while(r < s.size()) {
            while(st.find(s[r]) != st.end()) {
                st.erase(s[l]);
                l++;
            }
            st.insert(s[r]);
            mx = max(mx, r-l+1);
            r++;
        }

        return mx;
    }
};
