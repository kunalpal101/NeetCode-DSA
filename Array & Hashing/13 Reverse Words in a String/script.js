/**
 * Reverse the words in a string.
 * @param {string} s - The input string.
 * @return {string} The reversed string with words.
 */
const reverseWords = function(s) {
    let s1 = s.trim().split(/\s+/);

    return s1.reverse().join(' ');
  };
  
  // Test case
  function main() {
    const input1 = "the sky is blue";
    console.log(reverseWords(input1)); // Output: "blue is sky the"
  
    const input2 = "  hello world!  ";
    console.log(reverseWords(input2)); // Output: "world! hello"
  
    const input3 = "a good   example";
    console.log(reverseWords(input3)); // Output: "example good a"
  }
  
  main();
  