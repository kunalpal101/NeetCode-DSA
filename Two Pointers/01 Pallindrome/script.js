//Palindrome
//Two Pointer Method
//Time Complexity: O(n)
//Space Complexity: O(n)

/**
 * @param {string} s
 * @return {boolean}
 */
var isPalindrome = function(s) {
    const result = []
    s = s.toLowerCase();

    for(let i = 0 ; i<s.length ; i++){
        if(isAlphanumeric(s[i])) result.push(s[i])
    }

    function isAlphanumeric(char) {
        return /^[a-zA-Z0-9]$/.test(char);
    }

    console.log(result);

    let left = 0, right = result.length - 1
    while(left <= right){
        if(result[left++] == result[right--]) continue
        else return false;
    }

    return true;

};

function main() {
  // Test case 1
  const s1 = "A man, a plan, a canal: Panama";
  console.log(`Test case 1: ${isPalindrome(s1)}`); // Output: true

  // Test case 2
  const s2 = "race a car";
  console.log(`Test case 2: ${isPalindrome(s2)}`); // Output: false

  // Test case 3
  const s3 = "No 'x' in Nixon";
  console.log(`Test case 3: ${isPalindrome(s3)}`); // Output: true

  // Test case 4
  const s4 = "12321";
  console.log(`Test case 4: ${isPalindrome(s4)}`); // Output: true
}

main();
