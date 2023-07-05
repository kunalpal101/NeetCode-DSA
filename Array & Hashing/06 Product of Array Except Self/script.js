//Product of Array Except Self
//Prefix & Postfix method
//Time Complexity: O(n)
//Space Complexity: O(n)

var productExceptSelf = function(nums) {
    const result = [];
    let temp = 1;
    
    //postfix
    for(let i = 0 ; i<nums.length ; i++){
        result[i] = temp;
        temp = temp * nums[i];
    }

    temp = 1;
    
    //prefix
    for(let i = nums.length - 1 ; i>=0 ; i--){
        result[i] = result[i] * temp;
        temp = temp * nums[i];
    }

    return result;
}


function main() {
    // Test case 1
    const nums1 = [1, 2, 3, 4];
    console.log(`Test case 1: ${productExceptSelf(nums1)}`); // Output: [24, 12, 8, 6]
  
    // Test case 2
    const nums2 = [2, 3, 5, 7];
    console.log(`Test case 2: ${productExceptSelf(nums2)}`); // Output: [105, 70, 42, 30]
  
    // Test case 3
    const nums3 = [-1, 1, -2, 2, -3];
    console.log(`Test case 3: ${productExceptSelf(nums3)}`); // Output: [12, -12, 6, -6, 4]
  
    // Test case 4
    const nums4 = [1, 1, 1, 1, 1];
    console.log(`Test case 4: ${productExceptSelf(nums4)}`); // Output: [1, 1, 1, 1, 1]
  }
  
  main();
  