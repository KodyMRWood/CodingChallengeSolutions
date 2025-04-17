var countPairs = function (nums, k) {
    counter = 0;

    for (x = 0; x < nums.length; ++x) {
        for (y = x + 1; y < nums.length; ++y) {
            if (nums[x] == nums[y]) {
                if ((x * y) % k == 0)
                    ++counter;
            }
        }
    }

    return counter;
};