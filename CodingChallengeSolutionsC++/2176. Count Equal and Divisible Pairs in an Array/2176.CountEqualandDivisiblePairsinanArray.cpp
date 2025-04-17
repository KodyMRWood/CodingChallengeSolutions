#include <vector>

class CountEqualandDivisiblePairsinanArray{
public:
    int countPairs(std::vector<int>& nums, int k) {
        if (nums.size() == 1)
        {
            return 0;
        }

        int counter = 0;
        for (int x = 0; x < nums.size(); ++x)
        {
            for (int y = x + 1; y < nums.size(); ++y)
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
};