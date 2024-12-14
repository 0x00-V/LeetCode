class Solution {
public:
    long long continuousSubarrays(vector<int>& nums) 
    {
        int left{0}, right{0};
        long long count{0}; 

        priority_queue<int, vector<int>, function<bool(int, int)>> min_heap([&nums](int a, int b) { return nums[a] > nums[b]; });
        priority_queue<int, vector<int>, function<bool(int, int)>> max_heap([&nums](int a, int b) { return nums[a] < nums[b]; });

        while (right < nums.size())
        {
            min_heap.push(right);
            max_heap.push(right);
            while (left < right &&
                   nums[max_heap.top()] - nums[min_heap.top()] > 2)
                {
                    left++;
                    while (!max_heap.empty() && max_heap.top() < left) {max_heap.pop();}
                while (!min_heap.empty() && min_heap.top() < left){min_heap.pop();}
            }
            count += right - left + 1;
            right++;
        }

        return count;
    }
};