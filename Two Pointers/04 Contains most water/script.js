//Contains most water
//Two Pointer
//Time Complexity: O(n)
//Space Complexity: O(1)

var maxArea = function(height) {
    let max = 0;
    let left = 0, right = height.length - 1;    

    // console.log(max);
    
    while(left < right){
        let min = (height[left] < height[right]) ? height[left] : height[right];
        let temp_max = min * (right - left);
        // console.log(`right = ${right} left = ${left} temp_max = ${temp_max}`)
        max = (max > temp_max) ? max : temp_max;
        
        if(height[left] < height[right]){
            left++
        }
        else{
            right--
        }
    }
    return max;
};

function main() {
    // Test case 1
    const height1 = [1, 8, 6, 2, 5, 4, 8, 3, 7];
    console.log(`Test case 1: ${maxArea(height1)}`); // Output: 49
  
    // Test case 2
    const height2 = [1, 1];
    console.log(`Test case 2: ${maxArea(height2)}`); // Output: 1
  
    // Test case 3
    const height3 = [4, 3, 2, 1, 4];
    console.log(`Test case 3: ${maxArea(height3)}`); // Output: 16
  
    // Test case 4
    const height4 = [1, 2, 1];
    console.log(`Test case 4: ${maxArea(height4)}`); // Output: 2
  }
  
  main();