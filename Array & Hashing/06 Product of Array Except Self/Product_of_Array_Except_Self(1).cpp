//Product of Array Except Self
//Division Method
//Time Complexity: O(n) Special Cases with 0 can give O(n2)
//Space Complexity: O(n)
//Difficulty: Medium

#include<stdio.h>
#include<stdlib.h>

int* productExceptSelf(int* nums, int numsSize, int* returnSize){
	*returnSize = numsSize;
	
	int *result = (int*)malloc(numsSize * sizeof(int));
	
	int mul_val=1, temp_mul_val=1;
	for(int i = 0 ; i<numsSize ; i++){
		mul_val  *= nums[i];
	}
	
	for( int i = 0 ; i<numsSize ; i++){
		if(nums[i] == 0){
			temp_mul_val = 1;
			for(int j = 0 ; j<numsSize ; j++){
				if(j == i){
					continue;
				}
				temp_mul_val = temp_mul_val * nums[j];
			}
			
			result[i] = temp_mul_val;
		}
		else{
			result[i] = mul_val / nums[i];
		}
	}
	
	return result;
	
}

int main() {
    // Test Case 1
    int nums1[] = {1, 2, 3, 4, 5};
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
    int nums2[] = {0, 1, 2, 3, 4};
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



