class Solution {
public:
    
    bool canEat(vector<int>& piles, int h, int k) {
        long long hrs = 0;
        for(auto x: piles) {
            hrs += (x + k - 1) /k;
        }

        return hrs <= h;
    }


    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1,r=-1e7;
        for(auto a: piles) {
            r = max(r,a);
        }
        int ans = r;
        while (l <= r) {
            int k = l + (r - l) / 2;
            if(canEat(piles,h,k)) {
                ans = k;
                r=k-1;
            }else {
                l=k+1;
            }
        }
        return ans;
    }
};
