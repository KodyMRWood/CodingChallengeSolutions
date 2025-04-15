#include <vector>

class Solution {
public:
    int countGoodTriplets(std::vector<int>& arr, int a, int b, int c) {

        int counter = 0;
        for (int x = 0; x < arr.size() - 2; ++x)
        {
            for (int y = x + 1; y < arr.size() - 1; ++y)
            {
                for (int z = y + 1; z < arr.size(); ++z)
                {
                    if (abs(arr[x] - arr[y]) <= a && abs(arr[y] - arr[z]) <= b && abs(arr[x] - arr[z]) <= c)
                    {
                        ++counter;
                    }
                }
            }
        }
        return counter;
    }
};