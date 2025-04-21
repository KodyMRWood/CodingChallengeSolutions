/**
 * @param {number[]} nums
 * @param {number} lower
 * @param {number} upper
 * @return {number}
 */
var countFairPairs = function (nums, lower, upper) {

    nums.sort((a, b) => a - b);
    let count = 0;

    // Helper function to find first index with value >= target
    const lowerBound = (start, target) => {
        let left = start, right = nums.length;
        while (left < right) {
            let mid = Math.floor((left + right) / 2);
            if (nums[mid] < target) left = mid + 1;
            else right = mid;
        }
        return left;
    };

    // Helper function to find first index with value > target
    const upperBound = (start, target) => {
        let left = start, right = nums.length;
        while (left < right) {
            let mid = Math.floor((left + right) / 2);
            if (nums[mid] <= target) left = mid + 1;
            else right = mid;
        }
        return left;
    };

    // For every number, count how many numbers after it make a fair pair
    for (let i = 0; i < nums.length; i++) {
        let left = lowerBound(i + 1, lower - nums[i]);
        let right = upperBound(i + 1, upper - nums[i]);
        count += right - left;
    }

    return count;
};