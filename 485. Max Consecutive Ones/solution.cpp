class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int c1{0}, c2{0};
        for(int i{0}; i < nums.size(); i++)
        {
            if(nums[i] == 1) 
            {
                c1++;
                if(c1>c2) c2 = c1;
            }
            else c1 = 0;
        }
        return c2;
    }
};