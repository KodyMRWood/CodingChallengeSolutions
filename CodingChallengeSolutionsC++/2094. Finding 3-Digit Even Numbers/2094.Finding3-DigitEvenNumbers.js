var findEvenNumbers = function (digits) {
    let freq = new Array(10).fill(0);
    for (let x = 0; x < digits.length; ++x) {
        freq[digits[x]]++;
    }

    let res = [];
    for (let j = 1; j <= 9; ++j) {
        if (freq[j] == 0) {
            continue;
        }
        freq[j]--;
        for (let k = 0; k <= 9; ++k) {
            if (freq[k] == 0) {
                continue;
            }
            freq[k]--;
            for (let l = 0; l <= 8; l += 2) {
                if (freq[l] == 0) {
                    continue;
                }
                res.push(j * 100 + k * 10 + l);
            }
            freq[k]++;
        }
        freq[j]++;
    }
    return res;
};