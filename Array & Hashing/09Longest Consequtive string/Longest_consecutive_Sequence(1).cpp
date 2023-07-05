//Longest Consecitive Sequence
//Sorting Method
//Time Complexity: O(n * log(n))
//Space Complexity: O(1)
//Difficulty: Medium


#include<stdio.h>
#include<stdlib.h>

int compare(const void *a, const void *b){
	return *(int*)a - *(int*)b;
}

int longestConsecutive(int* nums, int numsSize){
	
	if(numsSize == 0){
		return 0;
	}
	
	//Sorting the array
	qsort(nums, numsSize, sizeof(int), compare);
	
	int currMax = 1, finMax = 1;
	
	for(int i = 0 ; i<numsSize ; i++){
		if(nums[i] + 1 == nums[i+1]){
			currMax++;
		}
		else if(nums[i+1] == nums[i]){
			continue;
		}
		else{
			currMax = 1;
		}
		
		finMax = (currMax > finMax) ? currMax : finMax;
	}
	
	return finMax;
}

int main() {
    // Test Case 1: Array with consecutive elements
    int nums1[] = {100, 4, 200, 1, 3, 2};
    int numsSize1 = sizeof(nums1) / sizeof(nums1[0]);
    int result1 = longestConsecutive(nums1, numsSize1);
    printf("Test Case 1: %d\n", result1); // Expected output: 4

    // Test Case 2: Array with non-consecutive elements
    int nums2[] = {9, 8, 7, 6, 5, 4};
    int numsSize2 = sizeof(nums2) / sizeof(nums2[0]);
    int result2 = longestConsecutive(nums2, numsSize2);
    printf("Test Case 2: %d\n", result2); // Expected output: 1

    // Test Case 3: Empty array
    int nums3[] = {};
    int numsSize3 = sizeof(nums3) / sizeof(nums3[0]);
    int result3 = longestConsecutive(nums3, numsSize3);
    printf("Test Case 3: %d\n", result3); // Expected output: 0
    
    // Test Case 4: 
    int nums4[] = {0};
    int numsSize4 = sizeof(nums4) / sizeof(nums4[0]);
    int result4 = longestConsecutive(nums4, numsSize4);
    printf("Test Case 4: %d\n", result4); // Expected output: 1
}
