/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    const hashmap = {};
 
    for(let i = 0 ; i<nums.length ; i++){
         let temp = target - nums[i];
         if(temp in hashmap){
             return [hashmap[temp], i];
         }
         else{
             hashmap[nums[i]] = i;
         }
     
    }
 };
 
 
 // Main function
 function main() {
     // Test case 1
     let nums1 = [2, 7, 11, 15];
     let target1 = 9;
     console.log("Test Case 1:");
     console.log("Input: nums =", nums1, ", target =", target1);
     console.log("Output:", twoSum(nums1, target1));
     console.log();
     
     // Test case 2
     let nums2 = [3, 2, 4];
     let target2 = 6;
     console.log("Test Case 2:");
     console.log("Input: nums =", nums2, ", target =", target2);
     console.log("Output:", twoSum(nums2, target2));
     console.log();
     
     // Test case 3
     let nums3 = [0, 4, 3, 0];
     let target3 = 0;
     console.log("Test Case 3:");
     console.log("Input: nums =", nums3, ", target =", target3);
     console.log("Output:", twoSum(nums3, target3));
     console.log();
     
     // Test case 4
     let nums4 = [-1, -2, -3, -4, -5];
     let target4 = -8;
     console.log("Test Case 4:");
     console.log("Input: nums =", nums4, ", target =", target4);
     console.log("Output:", twoSum(nums4, target4));
     console.log();
 }
 
 // Calling the main function
 main();