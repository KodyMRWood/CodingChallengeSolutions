var search = function (nums, target) {
    min = 0;
    max = nums.length - 1;

    while (min <= max) {
        current = parseInt((min + max) / 2);
        if (nums[current] == target) {
            return current;
        }
        else if (target < nums[current]) {
            max = current - 1;
        }
        else if (target > nums[current]) {
            min = current + 1;
        }
    }
    return -1;
};