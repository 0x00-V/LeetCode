class Solution {
public:
    int pointer_1{0}, pointer_2{0};
    int getSmallest(vector<int>& n1, vector<int>& n2) {
        if (pointer_1 < n1.size() && pointer_2 < n2.size()) 
            return n1[pointer_1] < n2[pointer_2] ? n1[pointer_1++] : n2[pointer_2++];
        else if (pointer_1 < n1.size()) return n1[pointer_1++];
        else if (pointer_2 < n2.size()) return n2[pointer_2++];
        return -1;
    }


    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
    {
        int m = nums1.size(), n = nums2.size(), totalLength = m + n;
        if (totalLength % 2 == 1) 
        {
            for (int i = 0; i < totalLength / 2; ++i) getSmallest(nums1, nums2);
            return getSmallest(nums1, nums2);
        }
        int firstMid = -1, secondMid = -1;
        for (int i = 0; i <= totalLength / 2; ++i) 
        {
            firstMid = secondMid;
            secondMid = getSmallest(nums1, nums2);
        }
        return (firstMid + secondMid) / 2.0;
    }
};
