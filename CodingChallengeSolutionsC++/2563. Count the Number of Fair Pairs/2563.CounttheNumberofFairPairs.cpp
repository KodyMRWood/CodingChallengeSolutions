#include <vector>
#include <algorithm>

class CounttheNumberofFairPairs{
public:
    long long countFairPairs(std::vector<int>& nums, int lower, int upper) {
        int size = nums.size();
        long long pairCounter = 0;

        // Brute Force -> for each value compare to all other values of higher index (O(n^2))
        //for(int x = 0; x <size; ++x)
        //{
        //     for(int y = x+1; y <size; ++y)
        //    {
        //        int sum = nums[x]+nums[y];
        //        if(sum >= lower && sum <= upper)
        //        {
        //            ++pairCounter;
        //        }
        //    }
        //}

        // Binary Search -> Sort the array, find what the lowest and highest value can be by using lower and upper bounds minus value at index 
        //                  Find the index of the lower and upper bounds (closest value less than lower lowest possible value, and same with highest)
        //                  Subtract the difference, that will give the number of pairs that will be between the lower and upper bounds

        std::sort(nums.begin(), nums.end());
        for (int x = 0; x < size; ++x)
        {
            int min = lower - nums[x];
            int max = upper - nums[x];
            auto low = std::lower_bound(nums.begin() + x + 1, nums.end(), min);
            auto high = std::upper_bound(nums.begin() + x + 1, nums.end(), max);
            pairCounter += high - low;
        }


        return pairCounter;

    }
};