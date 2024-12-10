class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> memo;
        memo.push_back(nums[0]);
        for(int x:nums)
        {
            if(x > memo [memo.size()-1])
            {
                memo.push_back(x);
            } else
            {
                vector<int>::iterator lb = lower_bound(memo.begin(), memo.end(), x);
                *lb=x;
            }
        }
        return memo.size();
    }
};