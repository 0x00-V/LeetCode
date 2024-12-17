class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count{0};

        for(int n:nums)
        {
            int dc = (int)floor(log10(n))+1;
            if(dc % 2 == 0) count++;
        }
        return count;
    }
};
// Time complexity is  O(N)
// Const space complexity O(1)