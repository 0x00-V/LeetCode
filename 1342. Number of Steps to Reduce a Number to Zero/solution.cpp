class Solution {
public:
    int numberOfSteps(int num) {
        long steps{0};
        while(num > 0)
        {
            if(num % 2 == 0)
            {
                // even
                num = num / 2;
                steps+= 1;
            } else
            {
                // odd
                num-=1;
                steps+=1;
            }
        }
        return steps;
    }
};
// O(log n)