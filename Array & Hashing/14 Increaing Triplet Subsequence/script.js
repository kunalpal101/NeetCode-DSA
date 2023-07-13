/**
 * Check if there exists an increasing triplet subsequence.
 * @param {number[]} nums - The array of numbers.
 * @return {boolean} True if an increasing triplet subsequence exists, false otherwise.
 */
const increasingTriplet = function (nums) {
    let left = Math.max(...nums), middle = Math.max(...nums);
    let right = 0;
    
    while(right < nums.length){
        if(nums[right] < left){
            left = nums[right]
        }
        else if(nums[right] < middle){
            middle = nums[right];
        }
        //console.log(left+"-" + middle + "-"+nums[right]);
        if(left < middle  && middle < nums[right]) return true;
        right++;
    }

    return false;
};

// Test cases
function main() {
    const nums1 = [1, 2, 3, 4, 5];
    console.log(increasingTriplet(nums1)); // Output: true

    const nums2 = [5, 4, 3, 2, 1];
    console.log(increasingTriplet(nums2)); // Output: false

    const nums3 = [2, 1, 5, 0, 4, 6];
    console.log(increasingTriplet(nums3)); // Output: true
}

main();
