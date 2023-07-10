#include <stdio.h>
#include <stdlib.h>

// Definition for singly-linked list.
struct ListNode {
    int val;
    struct ListNode *next;
};

/**
 * Merge two sorted linked lists.
 * @param l1 The head of the first linked list.
 * @param l2 The head of the second linked list.
 * @return The head of the merged sorted linked list.
 */
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
	struct ListNode* l3 = NULL;
	
	struct ListNode* h1 = l1;
	struct ListNode* h2 = l2;
	struct ListNode* h3 = NULL;
	
	
	
	while(h1 != NULL || h2 != NULL){
		//printf("h\n");
		
		struct ListNode* newNode = (struct ListNode*) malloc(sizeof(struct ListNode));
		newNode->next = NULL;
		
		if(h1 != NULL && h2 != NULL){						
			if(h1->val < h2->val){
				//printf("Compared %d & %d", h1->val, h2->val);
				newNode->val = h1->val;				
				h1 = h1->next;
			}
			else{
				//printf("Compared %d & %d", h1->val, h2->val);
				newNode->val = h2->val;
				h2 = h2->next;
			}
			
			if(l3 == NULL){
				l3 = newNode;
				h3 = l3;									
			}
			else{
				h3->next = newNode;
				h3 = h3->next;
			}
		}
		
		else if(h1 != NULL){
			newNode->val = h1->val;				
			h1 = h1->next;
			
			if(h3 == NULL){
				h3 = newNode;				
			}
			else{
				h3->next = newNode;
				h3 = h3->next;
			}
		}
		
		else if(h2 != NULL){
			newNode->val = h2->val;
			h2 = h2->next;
			
			if(h3 == NULL){
				h3 = newNode;
			}
			else{
				h3->next = newNode;
				h3 = h3->next;
			}
		}
	}
	
	return l3;
	
}

/**
 * Create a new node with the given value.
 * @param val The value for the new node.
 * @return The pointer to the new node.
 */
struct ListNode* createNode(int val) {
    struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
    newNode->val = val;
    newNode->next = NULL;
    return newNode;
}

/**
 * Free the memory allocated for the linked list.
 * @param head The head of the linked list.
 */
void freeLinkedList(struct ListNode* head) {
    struct ListNode* curr = head;

    while (curr != NULL) {
        struct ListNode* nextNode = curr->next;
        free(curr);
        curr = nextNode;
    }
}

/**
 * Main function with test cases.
 */
int main() {
    // Test case 1
    struct ListNode* l1 = createNode(1);
    l1->next = createNode(2);
    l1->next->next = createNode(4);

    struct ListNode* l2 = createNode(1);
    l2->next = createNode(3);
    l2->next->next = createNode(4);

    printf("Test case 1:\n");
    printf("List 1: 1 -> 2 -> 4\n");
    printf("List 2: 1 -> 3 -> 4\n");

    struct ListNode* merged1 = mergeTwoLists(l1, l2);
    struct ListNode* curr1 = merged1;
    printf("Merged List: ");
    while (curr1 != NULL) {
        printf("%d ", curr1->val);
        curr1 = curr1->next;
    }
    printf("\n");

    freeLinkedList(l1);
    freeLinkedList(l2);
    freeLinkedList(merged1);

    // Test case 2
    struct ListNode* l3 = NULL;

    struct ListNode* l4 = NULL;

    printf("\nTest case 2:\n");
    printf("List 1: Empty list\n");
    printf("List 2: Empty list\n");

    struct ListNode* merged2 = mergeTwoLists(l3, l4);
    struct ListNode* curr2 = merged2;
    printf("Merged List: ");
    while (curr2 != NULL) {
        printf("%d ", curr2->val);
        curr2 = curr2->next;
    }
    printf("\n");
    
    // Test case 3
	struct ListNode* l5 = createNode(1);
	
	struct ListNode* l6 = createNode(2);
	l6->next = createNode(3);
	l6->next->next = createNode(4);
	
	printf("\nTest case 3:\n");
	printf("List 1: 1\n");
	printf("List 2: 2 -> 3 -> 4\n");
	
	struct ListNode* merged3 = mergeTwoLists(l5, l6);
	struct ListNode* curr3 = merged3;
	printf("Merged List: ");
	while (curr3 != NULL) {
	printf("%d ", curr3->val);
	curr3 = curr3->next;
	}
	printf("\n");
	
	freeLinkedList(l5);
	freeLinkedList(l6);
	freeLinkedList(merged3);
	
	// Test case 4
	struct ListNode* l7 = createNode(5);
	
	struct ListNode* l8 = createNode(1);
	l8->next = createNode(4);
	l8->next->next = createNode(6);
	
	printf("\nTest case 4:\n");
	printf("List 1: 5\n");
	printf("List 2: 1 -> 4 -> 6\n");
	
	struct ListNode* merged4 = mergeTwoLists(l7, l8);
	struct ListNode* curr4 = merged4;
	printf("Merged List: ");
	while (curr4 != NULL) {
	printf("%d ", curr4->val);
	curr4 = curr4->next;
	}
	printf("\n");
	
	freeLinkedList(l7);
	freeLinkedList(l8);
	freeLinkedList(merged4);


    return 0;
}

