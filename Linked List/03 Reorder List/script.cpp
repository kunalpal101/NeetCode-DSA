#include <stdio.h>
#include <stdlib.h>

// Definition for singly-linked list.
struct ListNode {
    int val;
    struct ListNode *next;
};

/**
 * Reorder the given linked list.
 * @param head The head of the linked list.
 */

struct ListNode* reverseList(struct ListNode* head){
	struct ListNode* prev = NULL;
	struct ListNode* next = NULL;
	struct ListNode* temp = head;
	
	while(temp != NULL){		
		next = temp->next;
		temp->next = prev;
		prev = temp;
		temp = next;		
	}
	return prev;
}

void reorderList(struct ListNode* head) {
	//printf("Hey");
	
	struct ListNode* fast = head;
	struct ListNode* slow = head;
	
	//for even vals;
	struct ListNode* prevslow = head;
	struct ListNode* prevfast = head;
	
	while(fast != NULL && fast->next != NULL){
		prevfast = fast;
		fast = fast->next->next;
		
		prevslow = slow;
		slow = slow->next;
	}
	
		
	if(fast == NULL){
		slow = prevslow;
		fast = prevfast->next;		
	}		
	
	//To terminate the first list	
	fast = slow->next;
	slow->next = NULL;
	
	fast = reverseList(fast);
	slow = head;	
	
	struct ListNode* temp1 = NULL;
	struct ListNode* temp2 = NULL;
	while(fast != NULL){
		temp1 = slow->next;
		temp2 = fast->next;
		
		fast->next = slow->next;
		slow->next = fast;	
		
		slow = temp1;
		fast = temp2;			
	}
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
 * Main function with a test case.
 */
int main() {
    // Test case
    struct ListNode* head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(3);
    head->next->next->next = createNode(4);

    printf("Original List: 1 -> 2 -> 3 -> 4\n");

    reorderList(head);

    struct ListNode* curr = head;
    printf("Reordered List: ");
    while (curr != NULL) {
        printf("%d ", curr->val);
        curr = curr->next;
    }
    printf("\n");

    freeLinkedList(head);


	// Test case 2
	struct ListNode* head2 = createNode(1);
	head2->next = createNode(2);
	head2->next->next = createNode(3);
	head2->next->next->next = createNode(4);
	head2->next->next->next->next = createNode(5);
	
	printf("\nTest case 2:\n");
	printf("Original List: 1 -> 2 -> 3 -> 4 -> 5\n");
	
	reorderList(head2);
	
	struct ListNode* curr2 = head2;
	printf("Reordered List: ");
	while (curr2 != NULL) {
	    printf("%d ", curr2->val);
	    curr2 = curr2->next;
	}
	printf("\n");
	
	freeLinkedList(head2);
	
	
	// Test case 3
	struct ListNode* head3 = createNode(1);
	head3->next = createNode(2);
	
	printf("\nTest case 3:\n");
	printf("Original List: 1 -> 2\n");
	
	reorderList(head3);
	
	struct ListNode* curr3 = head3;
	printf("Reordered List: ");
	while (curr3 != NULL) {
	    printf("%d ", curr3->val);
	    curr3 = curr3->next;
	}
	printf("\n");
	
	freeLinkedList(head3);
	
	
	// Test case 4
	struct ListNode* head4 = createNode(1);
	
	printf("\nTest case 4:\n");
	printf("Original List: 1\n");
	
	reorderList(head4);
	
	struct ListNode* curr4 = head4;
	printf("Reordered List: ");
	while (curr4 != NULL) {
	    printf("%d ", curr4->val);
	    curr4 = curr4->next;
	}
	printf("\n");
	
	freeLinkedList(head4);

    return 0;
}

