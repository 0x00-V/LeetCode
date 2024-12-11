class Solution {
public:
    int search(vector<int>& nums, int target) {
        if (nums.empty()) return -1;
        
        int n = nums.size();
        int l = 0, r = n - 1;

        while (l < r) {
            int m = l + (r - l) / 2; 
            if (nums[m] > nums[r]) {
                l = m + 1;
            } else {
                r = m;
            }
        }

        int pivot = l;
        l = 0;
        r = n - 1;

        if (target >= nums[pivot] && target <= nums[r]) {
            l = pivot; 
        } else {
            r = pivot - 1;  
        }
        
        while (l <= r) {
            int m = l + (r - l) / 2;
            if (nums[m] == target) return m;
            else if (nums[m] < target) l = m + 1;
            else r = m - 1;
        }

        return -1;
    }
};
