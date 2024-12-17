class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> squared(nums.size());

        for(int i{0}; i < nums.size(); i++)
        {
            squared[i] = nums[i] * nums[i];
        }
        sort(squared.begin(), squared.end());
        return squared;

    }
};

// Time: O(N log N)
// Space: O(N)