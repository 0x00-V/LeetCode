class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        size_t max_val{0}, chunk_count{0};
        for(int i{0}; i < arr.size(); i++)
        {
            if(arr[i] > max_val) max_val = arr[i];
            if(max_val == i)
            {
                chunk_count++;
            }
        }
        return chunk_count;
        
    }
};