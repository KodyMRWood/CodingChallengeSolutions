

namespace CodingChallengeSolutions.RabbitsinForest
{
    public class RabbitsinForest
    {
        public int NumRabbits(int[] answers)
        {
            Dictionary<int, int> unique = new Dictionary<int, int>();
            int rabbits = 0;
            for (int x = 0; x < answers.Count(); ++x)
            {
                if (!unique.ContainsKey(answers[x]))
                {
                    unique.Add(answers[x], 1);
                }
                else
                {
                    unique[answers[x]]++;
                }

            }

            foreach (KeyValuePair<int, int> entry in unique)
            {
                rabbits += (int)Math.Ceiling((double)entry.Value / (entry.Key + 1)) * (entry.Key + 1);
            }
            return rabbits;
        }
    }
}
