class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num < 2) return true;
        
        long l = 2, r = num / 2;
        long x, gS;
        
        while(l <= r)
        {
             x = l + (r - l) / 2;
             gS = x * x;
             if(gS == num) return true;
             if(gS > num) r = x - 1;
             else l = x + 1;
        }
        return false;
    }
};