//Three Sum
//Two Pointer
//Time Complexity: O(n2)
//Space Complexity: O(n)


var threeSum = function(nums) {
    let result = []

    nums.sort((a,b) => a-b);

    for(let i = 0 ; i<nums.length -2 ; i++){
        
        if(i>0 && nums[i] === nums[i-1]) continue;
        
        let left = i + 1;
        let right = nums.length - 1;
        while(left < right){
            const sum = nums[i] + nums[right] + nums[left]

            if(sum === 0){
                result.push([nums[i], nums[left], nums[right]]);

                while(left < right && nums[right] == nums[right - 1]){
                    right--;
                }
    
                while(left < right && nums[left] === nums[left + 1]){
                    left++;
                }

                left++;
                right--;
            }
            else if(sum < 0){
                left++;
            }
            else{
                right--;
            }
        }
    }
    return result;
}


function main() {
    // // Test case 1
    // const nums1 = [-1, 0, 1, 2,-1,-4];
    // console.log(`Test case 1: ${threeSum(nums1)}`);
    // /* Output:
    // [
    //   [-1, -1, 2],
    //   [-1, 0, 1]
    // ]
    // */
    
    // Test case 1
    const nums1 = [-1, 0, 1, 2, -1, -4];
    console.log(`Test case 1: ${threeSum(nums1)}`);
    /* Output:
    [
      [-1, -1, 2],
      [-1, 0, 1]
    ]
    */
  
    // Test case 2
    const nums2 = [];
    console.log(`Test case 2: ${threeSum(nums2)}`);
    // Output: []
  
    // Test case 3
    const nums3 = [0];
    console.log(`Test case 3: ${threeSum(nums3)}`);
    // Output: []
  
    // Test case 4
    const nums4 = [0, 0, 0, 0];
    console.log(`Test case 4: ${threeSum(nums4)}`);
    // Output: [[0, 0, 0]]
}
  
main();
  