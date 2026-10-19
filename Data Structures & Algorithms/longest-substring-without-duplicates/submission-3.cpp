class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> st;
        int l=0,r=0,mx=0;

        for(r=0; r<s.size(); r++) {
            if(st.find(s[r]) != st.end()) {
                while(st.find(s[r]) != st.end()) {
                    st.erase(s[l]);
                    l++;
                }
            }

            mx = max(mx, r-l+1);
            st.insert(s[r]);
        }

        return mx;
    }
};
