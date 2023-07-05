//Two Sum (Sorted)
//Two Pointer
//Time Complexity: O(n)
//Space Complexity: O(1)


var twoSum = function(numbers, target) {
    let left = 0;
    let right = numbers.length - 1

    while(left <= right){
        let temp = numbers[left] + numbers[right];
        //console.log(numbers[left]+ " + "+numbers[right]+" = "+temp)
        if(temp == target){
            return [left+1, right+1];
        }
        else if(temp > target){
            right--
        }
        else{
            left++;
        }
    }

    return [];
};

function main() {
  // Test case 1
  const numbers1 = [2, 7, 11, 15];
  const target1 = 9;
  console.log(`Test case 1: ${twoSum(numbers1, target1)}`); // Output: [1, 2]

  // Test case 2
  const numbers2 = [2, 3, 4];
  const target2 = 6;
  console.log(`Test case 2: ${twoSum(numbers2, target2)}`); // Output: [1, 3]

  // Test case 3
  const numbers3 = [-1, 0];
  const target3 = -1;
  console.log(`Test case 3: ${twoSum(numbers3, target3)}`); // Output: [1, 2]

  // Test case 4
  const numbers4 = [5, 25, 75];
  const target4 = 100;
  console.log(`Test case 4: ${twoSum(numbers4, target4)}`); // Output: [2, 3]
}

main();
