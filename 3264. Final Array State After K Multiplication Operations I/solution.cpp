class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        const int n = nums.size();
        for(int i{0}; i < n; i++) pq.emplace(nums[i], i); // insert elements from num into pq

        for(int i{0}; i < k; i++) // get smallest element from pq, remove, multiply removed num, and then re-insert 
        {
            auto [x, j]  = pq.top();
            pq.pop();
            pq.emplace(multiplier * x, j);
        }
        while(!pq.empty())
        {
            auto [x, i] = pq.top(); // reconstruction of nums happens in this while loop.
            pq.pop();
            nums[i] = x;
        }
        return nums;
    }
};


// O(n log n+k log n) 
/*
Insert n elements: O(n log n)
k transformations: O(k log n)
reconstruct nums arr: O(n log n)
*/