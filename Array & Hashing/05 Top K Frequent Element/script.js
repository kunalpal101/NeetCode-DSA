//Top K Frequent Element
//HashMap Method
//Time Complexity: O(n * log(n)) due to sorting
//Space Complexity: O(n)

var topKFrequent = function(nums, k) {
    const hashmap = {};

    for(let num in nums){
        hashmap[num] = (hashmap[num] || 0) + 1
    }

    const uniqueArray = [...new Set(nums)];

    uniqueArray.sort((a,b) => {
        const frequentA = hashmap[a];
        const frequentB = hashmap[b];

        return frequentB - frequentA;
    })

    return uniqueArray.slice(0,k);
}

function main() {
  // Test case 1
  const nums1 = [1, 1, 1, 2, 2, 3];
  const k1 = 2;
  console.log(`Test case 1: ${topKFrequent(nums1, k1)}`); // Output: [1, 2]

  // Test case 2
  const nums2 = [1, 2, 3, 4, 5];
  const k2 = 3;
  console.log(`Test case 2: ${topKFrequent(nums2, k2)}`); // Output: [1, 2, 3]

  // Test case 3
  const nums3 = [3, 1, 4, 1, 5, 9, 2, 6, 5, 3];
  const k3 = 4;
  console.log(`Test case 3: ${topKFrequent(nums3, k3)}`); // Output: [3, 1, 5, 2]
}

main();
