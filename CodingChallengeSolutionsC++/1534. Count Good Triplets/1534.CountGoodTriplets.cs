namespace CodingChallengeSolutions.CountGoodTriplets
{
    public class Solution
    {
        public int CountGoodTriplets(int[] arr, int a, int b, int c)
        {
            int counter = 0;
            for (int x = 0; x < arr.Count(); ++x)
            {
                for (int y = x + 1; y < arr.Count(); ++y)
                {
                    for (int z = y + 1; z < arr.Count(); ++z)
                    {
                        if (Math.Abs(arr[x] - arr[y]) <= a && Math.Abs(arr[y] - arr[z]) <= b && Math.Abs(arr[x] - arr[z]) <= c)
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
