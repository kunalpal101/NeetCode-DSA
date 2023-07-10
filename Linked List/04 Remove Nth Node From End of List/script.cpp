#include<stdio.h>
#include<stdlib.h>

struct ListNode{
	int val;
	struct ListNode* next;
};

struct ListNode* removeNthFromEnd(struct ListNode* head, int n){

	if(head == NULL || head->next == NULL){
		return NULL;
	}

	struct ListNode* left = head;
	struct ListNode* prev = NULL;
	struct ListNode* right = NULL;
	
	while(left!= NULL && n>0){		
		left = left->next;
		n--;
	}
	
	if(left == NULL){
		head = head->next;
		return head;
	}
	
	right = left;
	left = head;	
	
	while(right != NULL){
		printf("Hk");
		right = right->next;
		prev = left;
		left = left->next;		
	}
	
	prev->next = left->next;
	free(left);
	
	return head;
}

struct ListNode *createNode(int val){
	struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
	newNode->val = val;
	newNode->next = NULL;
	return newNode;
}

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

    int n1 = 2;
    printf("Test case 1:\n");
    printf("Original List: 1 -> 2 -> 3 -> 4 -> 5\n");
    printf("n = %d\n", n1);

    struct ListNode* updated1 = removeNthFromEnd(head1, n1);
    struct ListNode* curr1 = updated1;
    printf("Updated List: ");
    while (curr1 != NULL) {
        printf("%d ", curr1->val);
        curr1 = curr1->next;
    }
    printf("\n");

    freeLinkedList(updated1);

    // Test case 2
    struct ListNode* head2 = createNode(1);
    int n2 = 1;
    printf("\nTest case 2:\n");
    printf("Original List: 1\n");
    printf("n = %d\n", n2);

    struct ListNode* updated2 = removeNthFromEnd(head2, n2);
    struct ListNode* curr2 = updated2;
    printf("Updated List: ");
    while (curr2 != NULL) {
        printf("%d ", curr2->val);
        curr2 = curr2->next;
    }
    printf("\n");

    freeLinkedList(updated2);
    
    // Test case 3
struct ListNode* head3 = createNode(1);
head3->next = createNode(2);
head3->next->next = createNode(3);
head3->next->next->next = createNode(4);
head3->next->next->next->next = createNode(5);

int n3 = 5;
printf("\nTest case 3:\n");
printf("Original List: 1 -> 2 -> 3 -> 4 -> 5\n");
printf("n = %d\n", n3);

struct ListNode* updated3 = removeNthFromEnd(head3, n3);
struct ListNode* curr3 = updated3;
printf("Updated List: ");
while (curr3 != NULL) {
    printf("%d ", curr3->val);
    curr3 = curr3->next;
}
printf("\n");

freeLinkedList(updated3);

// Test case 4
struct ListNode* head4 = createNode(1);
head4->next = createNode(2);

int n4 = 2;
printf("\nTest case 4:\n");
printf("Original List: 1 -> 2\n");
printf("n = %d\n", n4);

struct ListNode* updated4 = removeNthFromEnd(head4, n4);
struct ListNode* curr4 = updated4;
printf("Updated List: ");
while (curr4 != NULL) {
    printf("%d ", curr4->val);
    curr4 = curr4->next;
}
printf("\n");

freeLinkedList(updated4);

// Test case 5
struct ListNode* head5 = NULL;
int n5 = 1;
printf("\nTest case 5:\n");
printf("Original List: Empty List\n");
printf("n = %d\n", n5);

struct ListNode* updated5 = removeNthFromEnd(head5, n5);
struct ListNode* curr5 = updated5;
printf("Updated List: ");
while (curr5 != NULL) {
    printf("%d ", curr5->val);
    curr5 = curr5->next;
}
printf("\n");

freeLinkedList(updated5);


    return 0;
}
