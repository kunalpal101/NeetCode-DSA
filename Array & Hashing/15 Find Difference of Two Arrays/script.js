function findDifference(nums1, nums2) {
  //let result = [[], []];

  nums1 = [...new Set(nums1)];
  nums2 = [...new Set(nums2)];

  let result = [[], []];

  for (let i = 0; i < nums1.length; i++) {
    if (nums2.includes(nums1[i])) continue;
    result[0].push(nums1[i]);
  }

  for (let i = 0; i < nums2.length; i++) {
    if (nums1.includes(nums2[i])) continue;
    result[1].push(nums2[i]);
  }

  return result;
}

function main() {
  // Test case 1
  const nums1_1 = [1, 2, 3];
  const nums2_1 = [2, 4, 6];
  console.log(`Test case 1: ${findDifference(nums1_1, nums2_1)}`); // Output: [1, 2]

  // Test case 2
  const nums1_2 = [10, 20, 30];
  const nums2_2 = [20];
  console.log(`Test case 2: ${findDifference(nums1_2, nums2_2)}`); // Output: [10, 30]
}

main();
