class Solution {
public:
    int findMin(vector<int>& nums) {
        int left{0}, right = nums.size() - 1;

        while(left < right)
        {
            int p = left + (right - left) / 2;
            if(nums[p] < nums[right]) right = p;
            else if(nums[p] > nums[right]) left = p + 1;
            else right -= 1;
        }  
        return nums[left];
        
    }
};