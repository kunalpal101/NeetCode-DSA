#include<stdio.h>
#include<stdlib.h>

struct ListNode{
	int val;
	struct ListNode *next;
};

struct ListNode* reverseList(struct ListNode* head){
	struct ListNode *prev = NULL;
	struct ListNode *temp = head;
	struct ListNode *next = NULL; 
	
	while(temp != NULL)	{
		next = temp->next;
		temp->next = prev;
		prev = temp;
		temp = next;		
	}
	
	return prev;
}

struct ListNode* createNode(int val){
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

int main() {
    // Test case 1
    struct ListNode* head1 = createNode(1);
    head1->next = createNode(2);
    head1->next->next = createNode(3);
    head1->next->next->next = createNode(4);
    head1->next->next->next->next = createNode(5);

    printf("Test case 1: ");
    struct ListNode* reversed1 = reverseList(head1);
    struct ListNode* curr1 = reversed1;
    while (curr1 != NULL) {
        printf("%d ", curr1->val);
        curr1 = curr1->next;
    }
    printf("\n");

    freeLinkedList(reversed1);

    // Test case 2
    struct ListNode* head2 = createNode(1);
    head2->next = createNode(2);

    printf("Test case 2: ");
    struct ListNode* reversed2 = reverseList(head2);
    struct ListNode* curr2 = reversed2;
    while (curr2 != NULL) {
        printf("%d ", curr2->val);
        curr2 = curr2->next;
    }
    printf("\n");

    freeLinkedList(reversed2);

    return 0;
}
