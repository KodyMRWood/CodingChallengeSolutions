var numberOfArrays = function (differences, lower, upper) {
    preSum = 0;
    minVal = 0;
    maxVal = 0;
    for (x = 0; x < differences.length; ++x) {
        preSum += differences[x];
        minVal = Math.min(minVal, preSum);
        maxVal = Math.max(maxVal, preSum);
    }

    return Math.max(0, (upper - lower + 1) - (maxVal - minVal));
};