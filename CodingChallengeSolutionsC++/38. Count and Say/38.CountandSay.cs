namespace CodingChallengeSolutions.CountandSay
{
    public class CountandSay
    {
        public string CountAndSay(int n)
        {
            string result = "1";

            for (int itr = 1; itr < n; ++itr)
            {
                string rle = "";
                int counterLetters = 1;
                for (int x = 1; x < result.Count(); ++x)
                {
                    if (result[x] == result[x - 1])
                    {
                        ++counterLetters;
                    }
                    else
                    {
                        rle += counterLetters.ToString() + result[x - 1];
                        counterLetters = 1;
                    }
                }
                rle += counterLetters.ToString() + result[result.Count() - 1];
                result = rle;
            }
            return result;
        }
    }
}
