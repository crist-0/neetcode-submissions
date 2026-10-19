class Solution {
public:

    bool isAlph(char c) {
        c = tolower(c);
        if(c >= '0' && c <= '9' || c >= 'a' && c <= 'z' || c >= 'A' && c <='Z') {
            return true;
        }
        return false;
    }

    bool isPalindrome(string s) {
        int l=0,r=s.size()-1;
        while( l < r) {

            while( l < r && !isAlph(s[l]))
                l++;
            
            while( l < r && !isAlph(s[r]))
                r--;

            if(tolower(s[l]) != tolower(s[r])) {
                return false;
            }
            r--;
            l++;
            
        }

        return true;
    }
};
