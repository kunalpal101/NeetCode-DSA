var longestConsecutive = function(nums) {
    const hashset = new Set(nums);
    let max = 0;

    for(let i = 0 ; i < nums.length ; i++){
        if(hashset.has(nums[i] - 1)) continue;

        let temp = 1, j = nums[i] + 1
        while(hashset.has(j++)){
            temp++;
        }

        max = (max < temp) ? temp : max
    }
    return max;
}

function main() {
    // Test case 1
    const nums1 = [100, 4, 200, 1, 3, 2];
    console.log(`Test case 1: ${longestConsecutive(nums1)}`); // Output: 4
  
    // Test case 2
    const nums2 = [0, -1, -2, 5, 6, 7, 8];
    console.log(`Test case 2: ${longestConsecutive(nums2)}`); // Output: 4
  
    // Test case 3
    const nums3 = [1, 3, 5, 7, 9];
    console.log(`Test case 3: ${longestConsecutive(nums3)}`); // Output: 1
  
    // Test case 4
    const nums4 = [2, 4, 6, 8, 10];
    console.log(`Test case 4: ${longestConsecutive(nums4)}`); // Output: 1
  }
  
  main();
  