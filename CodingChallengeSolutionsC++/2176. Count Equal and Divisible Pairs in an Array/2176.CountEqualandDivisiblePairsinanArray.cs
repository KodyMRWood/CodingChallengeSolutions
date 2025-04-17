namespace CodingChallengeSolutions.CountEqualandDivisiblePairsinanArray
{
    public class CountEqualandDivisiblePairsinanArray
    {
        public int CountPairs(int[] nums, int k)
        {
            if (nums.Count() == 1)
            {
                return 0;
            }
            int counter = 0;
            for (int x = 0; x < nums.Count(); ++x)
            {
                for (int y = x + 1; y < nums.Count(); ++y)
                {
                    if (nums[x] == nums[y])
                    {
                        if ((x * y) % k == 0)
                        {
                            ++counter;
                        }
                    }
                }
            }
            return counter;
        }
    }
}
