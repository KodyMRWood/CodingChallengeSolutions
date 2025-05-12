#include <vector>
class Finding3DigitEvenNumbers{
public:
    std::vector<int> findEvenNumbers(std::vector<int>& digits) {
        std::vector<int> frequency(10, 0);
        for (int x = 0; x < digits.size(); ++x)
        {
            frequency[digits[x]]++;
        }

        std::vector<int> result;
        for (int j = 1; j <= 9; ++j)
        {
            if (frequency[j] == 0)
            {
                continue;
            }
            frequency[j]--;
            for (int k = 0; k <= 9; ++k)
            {
                if (frequency[k] == 0)
                {
                    continue;
                }
                frequency[k]--;
                for (int l = 0; l <= 8; l += 2)
                {
                    if (frequency[l] == 0)
                    {
                        continue;
                    }
                    result.push_back(j * 100 + k * 10 + l);
                }
                frequency[k]++;
            }
            frequency[j]++;
        }
        return result;
    }
};