class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int initial_array_size=arr.size();
        for(int i{0}; i < arr.size();)
        {
            if(arr[i] == 0)
            {
                arr.insert(arr.begin()+i, 0);
                i+=2;
            } else i++;
        }
        arr.resize(initial_array_size);
        
    }
};