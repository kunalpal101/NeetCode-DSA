//Contains Duplicate
//Brute Force Method
//Time Complexity: O(n2)
//Space Complexity: O(1)


#include<stdio.h>

bool containsDuplicate(int *nums, int numsSize){		
	int i, j;
	
	for(int i = 0 ; i<numsSize ; i++){
		for(int j = i + 1 ; j<numsSize ; j++){
			if(nums[i] == nums[j]){
				return true;
			}
		}
	}	
	return false;
}

int main() {
    // Test Case 1: Array with duplicate elements
    int nums1[] = {1, 2, 3, 4, 5, 2};
    int numsSize1 = sizeof(nums1) / sizeof(nums1[0]);
    bool result1 = containsDuplicate(nums1, numsSize1);
    printf("Test Case 1: %s\n", result1 ? "Contains duplicate" : "No duplicates found");

    // Test Case 2: Array without any duplicates
    int nums2[] = {7, 9, 3, 6, 1, 8};
    int numsSize2 = sizeof(nums2) / sizeof(nums2[0]);
    bool result2 = containsDuplicate(nums2, numsSize2);
    printf("Test Case 2: %s\n", result2 ? "Contains duplicate" : "No duplicates found");

    // Test Case 3: Empty array
    int nums3[] = {};
    int numsSize3 = sizeof(nums3) / sizeof(nums3[0]);
    bool result3 = containsDuplicate(nums3, numsSize3);
    printf("Test Case 3: %s\n", result3 ? "Contains duplicate" : "No duplicates found");

    return 0;
}
