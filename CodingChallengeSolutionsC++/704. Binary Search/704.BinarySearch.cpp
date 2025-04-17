#include <vector>
class BinarySearch {
public:
    int search(std::vector<int>& nums, int target) {

        int min = 0;
        int max = nums.size() - 1;

        while (min <= max)
        {
            int index = (min + max) / 2;
            if (nums[index] == target)
            {
                return index;
            }
            else if (nums[index] > target)
            {
                max = index - 1;
            }
            else if (nums[index] < target)
            {
                min = index + 1;
            }
        }

        return -1;
    }
};