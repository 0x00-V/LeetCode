class Solution {
public:

    double myPow(double x, int n) {
        if(n == INT_MIN)
        {
            x*=x;
            n/=2;
        }
        long long n_l = n;
        
        if(n_l == 0) return 1.0;
        if(n_l < 0) return 1.0 / myPow(x, -n_l);

        if(n_l % 2 == 1) return x * myPow(x * x, (n_l - 1) / 2);
        else return myPow(x * x, n_l / 2);
    }
};