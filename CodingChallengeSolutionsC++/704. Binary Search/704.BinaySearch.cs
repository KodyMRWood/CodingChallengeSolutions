namespace CodingChallengeSolutions.BinarySearch
{
    public class BinarySearch
    {
        public int Search(int[] nums, int target)
        {
            int min = 0;
            int max = nums.Count() - 1;
            int current = 0;

            while (min <= max)
            {
                current = (min + max) / 2;
                if (nums[current] == target)
                {
                    return current;
                }
                else if (target < nums[current])
                {
                    max = current - 1;
                }
                else if (target > nums[current])
                {
                    min = current + 1;
                }
            }

            return -1;
        }
    }
}
