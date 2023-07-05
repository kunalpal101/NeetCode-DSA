//Valid Anagram
//Sorting Method
//Time Complexity: O(n*log(n))
//Space Complexity: O(1)
//Difficulty: Easy

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int compare(const void* a, const void* b) {
    char charA = *(const char*)a;
    char charB = *(const char*)b;
    return charA - charB;
}

bool isAnagram(char *s, char *t){
	if(strlen(s) != strlen(t)){
		return false;
	}
	
	int size = strlen(s);
	
	
	qsort(s,size, sizeof(char), compare);
	qsort(t,size, sizeof(char), compare);
	
	if(strcmp(s,t) == 0){
		return true;
	}
	else{
		return false;
	}
	
	
}

int main(){
	 // Test Case 1: Anagrams
    char s1[] = "listen";
    char t1[] = "silent";
    bool result1 = isAnagram(s1, t1);
    printf("Test Case 1: %s\n", result1 ? "Anagrams" : "Not anagrams");

    // Test Case 2: Not Anagrams
    char s2[] = "hello";
    char t2[] = "world";
    bool result2 = isAnagram(s2, t2);
    printf("Test Case 2: %s\n", result2 ? "Anagrams" : "Not anagrams");

    // Test Case 3: Anagrams with different lengths
    char s3[] = "abcdef";
    char t3[] = "fedcbaa";
    bool result3 = isAnagram(s3, t3);
    printf("Test Case 3: %s\n", result3 ? "Anagrams" : "Not anagrams");

    return 0;	
}
