class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int max_val{-1};
        for(int i = arr.size() - 1; i >= 0; i--)
        {
            int curr_val = arr[i];
            arr[i] = max_val;
            max_val = max(max_val, curr_val);
        }
        return arr;
    }
};