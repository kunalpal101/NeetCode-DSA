var mergeAlternately = function (word1, word2) {
    let word3 = [];
    let i = 0;

    while (word1[i] && word2[i]) {
        word3.push(word1[i]);
        word3.push(word2[i]);
        i++;
    }


    if (word1[i] == null) {
        while (word2[i]) {
            word3.push(word2[i++])
        }
    }

    if (word2[i] == null) {
        while (word1[i]) {
            word3.push(word1[i++])
        }
    }

    return word3.join('');
}

function main() {
    const word1 = "abc";
    const word2 = "def";
    console.log(mergeAlternately(word1, word2)); // Output: "adbecf"

    const word3 = "ab";
    const word4 = "xyz";
    console.log(mergeAlternately(word3, word4)); // Output: "axbyz"

    const word5 = "abcd";
    const word6 = "ef";
    console.log(mergeAlternately(word5, word6)); // Output: "aebfcde"
}

main();