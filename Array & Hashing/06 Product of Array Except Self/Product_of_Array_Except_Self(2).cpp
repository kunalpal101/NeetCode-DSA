//Product of Array Except Self
//PostFix & PreFix method
//Time Complexity: O(n)
//Space Complexity: O(n)
//Difficulty: Medium

#include<stdio.h>
#include<stdlib.h>

int* productExceptSelf(int* nums, int numsSize, int* returnSize){
	*returnSize = numsSize;
	int *result = (int*)malloc(numsSize * sizeof(int));
	int temp=1;

	for(int i = 0 ; i<numsSize ; i++){
		result[i] = temp;
		temp = temp * nums[i];
	}
	temp = 1;
	for(int i = numsSize-1 ; i>=0 ; i--){
		result[i] = result[i] * temp;
		temp = temp * nums[i];
	}
	
	return result;
}

int main() {
    // Test Case 1
    int nums1[] = {1, 2, 3, 4};
    int numsSize1 = sizeof(nums1) / sizeof(nums1[0]);
    int returnSize1;
    int* result1 = productExceptSelf(nums1, numsSize1, &returnSize1);
    
    printf("Test Case 1: ");
    for (int i = 0; i < returnSize1; i++) {
        printf("%d ", result1[i]);
    }
    printf("\n");
    free(result1);
    
    // Test Case 2
    int nums2[] = {2, 3, 5, 7};
    int numsSize2 = sizeof(nums2) / sizeof(nums2[0]);
    int returnSize2;
    int* result2 = productExceptSelf(nums2, numsSize2, &returnSize2);
    
    printf("Test Case 2: ");
    for (int i = 0; i < returnSize2; i++) {
        printf("%d ", result2[i]);
    }
    printf("\n");
    free(result2);
    
    return 0;
}
