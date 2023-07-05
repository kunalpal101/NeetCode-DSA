//Contains Duplicate
//Sorting Method
//Time Complexity: O(n*log(n))
//Space Complexity: O(1)
//Difficulty: Easy

#include<stdio.h>
#include<stdlib.h>

int compare(const void *a, const void *b){
	return *(int*)a - *(int*)b;
}

bool containsDuplicate(int *nums, int numsSize){
	qsort(nums, numsSize, sizeof(int), compare);
	
	for(int i = 0  ; i<numsSize-1 ; i++){
		if(nums[i] == nums[i+1]){
			return true;
		}
	}
	return false;
}

int main(){
	
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
}
