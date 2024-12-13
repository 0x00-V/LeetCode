class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> n1(nums1.begin(), nums1.end());
        vector<int> res;
        for(int x : nums2)
        {
            if(n1.count(x) > 0)
            {
                res.push_back(x);
                n1.erase(x);
            }
        }
        return res;


    }
};