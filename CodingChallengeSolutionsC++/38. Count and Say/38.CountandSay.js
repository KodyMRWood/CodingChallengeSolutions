var countAndSay = function (n) {
    result = "1";
    for (itr = 1; itr < n; ++itr) {
        counterLetters = 1;
        rle = "";
        for (x = 1; x < result.length; ++x) {
            if (result[x] == result[x - 1]) {
                ++counterLetters;
            }
            else {
                rle += counterLetters.toString() + result[x - 1];
                counterLetters = 1;
            }
        }
        rle += counterLetters.toString() + result[result.length - 1];
        result = rle;
    }
    return result;
};