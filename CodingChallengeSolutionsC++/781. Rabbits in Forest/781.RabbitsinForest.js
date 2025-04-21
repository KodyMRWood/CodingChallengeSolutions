/**
 * @param {number[]} answers
 * @return {number}
 */
var numRabbits = function (answers) {
    unique = new Map();
    rabbits = 0;

    for (x = 0; x < answers.length; ++x) {
        if (!unique.has(answers[x])) {
            unique.set(answers[x], 1);
        }
        else {
            unique.set(answers[x], unique.get(answers[x]) + 1);
        }
    }

    unique.forEach(function (value, key) {
        rabbits += Math.ceil(value / (key + 1)) * (key + 1)
    })

    return rabbits;
};