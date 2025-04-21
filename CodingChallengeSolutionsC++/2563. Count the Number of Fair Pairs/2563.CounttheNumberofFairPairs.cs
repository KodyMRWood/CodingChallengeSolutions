using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using static System.Runtime.InteropServices.JavaScript.JSType;

namespace CodingChallengeSolutions.CounttheNumberofFairPairs
{
    public class CounttheNumberofFairPairs
    {
        public long CountFairPairs(int[] nums, int lower, int upper)
        {
            // Brute Force -> for each value compare to all other values of higher index (O(n^2))
            // int size = nums.Count();
            //long pairCounter = 0 
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

            // Two Pointer -> Sort array. Move in the upper and lower bounds to find all possible pairs. If the lower number plus higher number
            //                is too high, then any subsequent number will also be too high. So we can keep the uppe pointer where it is 
            // Big O - O(nLogn) where n is the size of the array

            Array.Sort(nums);
            return CountPairs(nums, upper) - CountPairs(nums, lower - 1);
        }

        private long CountPairs(int[] nums, int bound)
        {
            long count = 0;
            int lower = 0;
            int upper = nums.Count() - 1;

            while (lower < upper)
            {
                if (nums[lower] + nums[upper] > bound)
                {
                    --upper;
                }
                else
                {
                    count += upper - lower;
                    lower++;
                }
            }
            return count;
        }
    }
}
