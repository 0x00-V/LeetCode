class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int l{0};
        int r = nums.size() - 1;
        while(l < r)
        {
            int m = (l + r) / 2;
            if(nums[m] > nums[m+1]) r = m;
            else l = m+1;
        }
        return l;
    }
};

// Time Complexity O(log2​(n))
// Space complexity O(1)