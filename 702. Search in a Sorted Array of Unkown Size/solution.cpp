/**
 * // This is the ArrayReader's API interface.
 * // You should not implement it, or speculate about its implementation
 * class ArrayReader {
 *   public:
 *     int get(int index);
 * };
 */

class Solution {
public:
    int search(const ArrayReader& reader, int target) {
        if(reader.get(0) == target) return 0;

        int left{0}, right{1};
        
        while(reader.get(right) < target)
        {
            left = right;
            right <<= 1;
        }

        int piv, num;

        while(left <= right)
        {
            piv = left + ((right - left) >> 1);
            num = reader.get(piv);
            if(num == target) return piv;
            if(num > target) right = piv - 1;
            else left = piv + 1;
        }
        return -1;
    }
};