//Two Sum
//Sorting Method
//Time Complexity: O(n2)
//Space Complexity: O(1)
//Difficulty: Easy

#include<stdio.h>
#include<stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize){
	*returnSize	= 2;
	
	int *result = (int*)malloc(2*sizeof(int));
	
	for(int i = 0 ; i<numsSize ; i++){
		for(int j = i+1 ; j<numsSize ; j++){
			if(nums[i] + nums[j] == target){
				result[0] = i;
				result[1] = j;
				return result;
			}
		}
	}
	
	return NULL;
}

int main(){
    // Test Case 1
    int nums1[] = {2, 7, 11, 15};
    int numsSize1 = sizeof(nums1) / sizeof(nums1[0]);
    int target1 = 9;
    int returnSize1;
    int* result1 = twoSum(nums1, numsSize1, target1, &returnSize1);
    if (result1 != NULL) {
        printf("Test Case 1: Indices are %d and %d\n", result1[0], result1[1]);
        free(result1);
    } else {
        printf("Test Case 1: No two numbers sum up to the target.\n");
    }
    
    // Test Case 2
    int nums2[] = {3, 2, 4};
    int numsSize2 = sizeof(nums2) / sizeof(nums2[0]);
    int target2 = 6;
    int returnSize2;
    int* result2 = twoSum(nums2, numsSize2, target2, &returnSize2);
    if (result2 != NULL) {
        printf("Test Case 2: Indices are %d and %d\n", result2[0], result2[1]);
        free(result2);
    } else {
        printf("Test Case 2: No two numbers sum up to the target.\n");
    }
    
    // Test Case 3
    int nums3[] = {-1, 0, 1, 2, -1, -4};
    int numsSize3 = sizeof(nums3) / sizeof(nums3[0]);
    int target3 = 0;
    int returnSize3;
    int* result3 = twoSum(nums3, numsSize3, target3, &returnSize3);
    if (result3 != NULL) {
        printf("Test Case 3: Indices are %d and %d\n", result3[0], result3[1]);
        free(result3);
    } else {
        printf("Test Case 3: No two numbers sum up to the target.\n");
    }
    
    return 0;
}
