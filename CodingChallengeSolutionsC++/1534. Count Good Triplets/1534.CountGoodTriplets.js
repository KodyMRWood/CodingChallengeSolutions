var countGoodTriplets = function (arr, a, b, c) {
    counter = 0
    for (x = 0; x < arr.length; ++x) {
        for (y = x + 1; y < arr.length; ++y) {
            for (z = y + 1; z < arr.length; ++z) {
                if (Math.abs(arr[x] - arr[y]) <= a && Math.abs(arr[y] - arr[z]) <= b && Math.abs(arr[x] - arr[z]) <= c) {
                    counter++;
                }
            }
        }
    }
    return counter
};