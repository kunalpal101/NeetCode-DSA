
const canPlaceFlowers = function(flowerbed, n) {
    for(let i = 0 ; i<flowerbed.length ; i++){
        if(flowerbed[i] == 0 && (flowerbed[i+1] == 0 || i == flowerbed.length - 1) && (flowerbed[i-1] == 0 || i == 0)){
            flowerbed[i]=1;
            n--;
        }
    }    
    if(n<=0) return true;
    else return false;
};


// Test case
function main() {
  const flowerbed1 = [1, 0, 0, 0, 1];
  const n1 = 1;
  console.log(canPlaceFlowers(flowerbed1, n1)); // Output: true

  const flowerbed2 = [1, 0, 0, 0, 1];
  const n2 = 2;
  console.log(canPlaceFlowers(flowerbed2, n2)); // Output: false

  const flowerbed3 = [0, 0, 1, 0, 0];
  const n3 = 1;
  console.log(canPlaceFlowers(flowerbed3, n3)); // Output: true
}

main();
