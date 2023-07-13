const kidsWithCandies = function(candies, extraCandies) {
    let max = Math.max(...candies);
    let result = [];

    for(let i = 0 ; i<candies.length ; i++){
        if(candies[i] + extraCandies >= max) result.push(true)
        else    result.push(false);        
    }

    return result;

}


// Test case
function main() {
  const candies1 = [2, 3, 5, 1, 3];
  const extraCandies1 = 3;
  console.log(kidsWithCandies(candies1, extraCandies1)); // Output: [true, true, true, false, true]

  const candies2 = [4, 2, 1, 1, 2];
  const extraCandies2 = 1;
  console.log(kidsWithCandies(candies2, extraCandies2)); // Output: [true, false, false, false, false]

  const candies3 = [12, 1, 12];
  const extraCandies3 = 10;
  console.log(kidsWithCandies(candies3, extraCandies3)); // Output: [true, false, true]
}

main();