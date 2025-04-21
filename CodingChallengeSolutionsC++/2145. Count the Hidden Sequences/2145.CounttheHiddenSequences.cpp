#include <vector>
class CounttheHiddenSequences {
public:
    int numberOfArrays(std::vector<int>& differences, int lower, int upper) {
        // // Brute Force (O(n^2))
        // int result = 0;

        // for(int x = lower; x <= upper; ++x)
        // {
        //     // Start with the lower bound
        //     int preSum = x;
        //     for(int y = 0; y < differences.size(); ++y)
        //     {
        //         preSum += differences[y];
        //         if(preSum < lower || preSum > upper)
        //         {
        //             break;
        //         }
        //         else if(y == differences.size()-1)
        //         {
        //             ++result;
        //         }
        //     } 
        // }
        // return result;

        // 
        long preSum = 0;
        long minVal = 0;
        long maxVal = 0;
        for (int x = 0; x < differences.size(); ++x)
        {
            preSum += differences[x];
            minVal = min(minVal, preSum);
            maxVal = max(maxVal, preSum);
        }

        return max(0L, (upper - lower + 1) - (maxVal - minVal));
    }
};