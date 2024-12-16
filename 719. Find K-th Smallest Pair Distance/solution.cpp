class Solution {
private:
    int MD(vector<int>& nums, int max_distance)
    {
        int c{0}, l{0};
        int array_size = nums.size();

        for(int r{0}; r < array_size; ++r)
        {
            while(nums[r] - nums[l] > max_distance) ++l;
            c+=r-l;
        }
        return c;
    }
public:
    int smallestDistancePair(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int arraySize = nums.size();
        int l{0}, h = nums[arraySize - 1] - nums[0];
        
        while(l < h)
        {
            int m = (l + h) / 2;

            int c = MD(nums, m);

            if(c < k) l = m+1;
            else h = m;
        }
        return l;
    }
};