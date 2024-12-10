class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums[0];

        vector<int> memoization(n, 0);
        memoization[0] = nums[0];
        memoization[1] = max(nums[0], nums[1]);

        for(int i = 2; i < n; i++)
        {
            memoization[i] = max(memoization[i-1], nums[i] + memoization[i - 2]);
        }
        return memoization[n - 1];
    }
};