namespace CodingChallengeSolutions.CounttheHiddenSequences
{
    public class CounttheHiddenSequences
    {
        public int NumberOfArrays(int[] differences, int lower, int upper)
        {
            long preSum = 0;
            long minVal = 0;
            long maxVal = 0;
            for (int x = 0; x < differences.Count(); ++x)
            {
                preSum += differences[x];
                minVal = Math.Min(minVal, preSum);
                maxVal = Math.Max(maxVal, preSum);
            }

            return Math.Max(0, (upper - lower + 1) - (int)(maxVal - minVal));
        }
    }
}
