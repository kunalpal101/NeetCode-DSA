function uniqueOccurrences(arr) {
  let hashMap = {};

  for (let i = 0; i < arr.length; i++) {
    hashMap[arr[i]] = (hashMap[arr[i]] || 0) + 1;
  }

  let hashSet = new Set();

  for (const val in hashMap) {
    const ele = hashMap[val];
    if (hashSet.has(ele)) return false;
    else hashSet.add(ele);
  }

  //console.log(hashSet);
  return true;
}

function main() {
  // Test case 1
  const arr1 = [1, 2, 2, 1, 1, 3];
  console.log(`Test case 1: ${uniqueOccurrences(arr1)}`); // Output: true

  // Test case 2
  const arr2 = [1, 2];
  console.log(`Test case 2: ${uniqueOccurrences(arr2)}`); // Output: false

  // Test case 3
  const arr3 = [-3, 0, 1, -3, 1, 1, 1, -3, 10, 0];
  console.log(`Test case 3: ${uniqueOccurrences(arr3)}`); // Output: true
}

main();
