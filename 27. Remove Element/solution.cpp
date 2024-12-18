class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int reader{0};
        for(int writer{0}; writer < nums.size(); writer++)
        {
            if(nums[writer] != val)
            {
                nums[reader] = nums[writer];
                reader++;
            }
        }
        return reader;
    }
};