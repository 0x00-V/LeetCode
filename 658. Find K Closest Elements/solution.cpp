class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int> res;
        int left{0};
        int right = arr.size() - 1;

        while(right - left + 1 > k)
        {
            if(abs(arr[left]-x) <= abs(arr[right]-x)) right--;
            else left++;
        }
        for(int i = left; i <= right; i++) {res.push_back(arr[i]);}
        return res;
    }
};