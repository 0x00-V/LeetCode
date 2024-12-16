class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        if(nums.empty() || k==0) return 0;
        size_t l{0}, r{0};
        for(size_t n : nums)
        {
            l = max(l, n);
            r += n;
        }
        if(k == nums.size()) return l;
        if(k == 1) return r;
        while(l < r)
        {
            size_t mid = (l + r) / 2;
            size_t bagsize{0}, current_mid{1};
            for(auto n:nums)
            {
                if(bagsize + n > mid)
                {
                    current_mid++;
                    bagsize=0;
                }
                bagsize+=n;
            }
            if(current_mid > k) l = mid+1;
            else r = mid;
        }
        return l;
    }
};