#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
void insertAtBeginning(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = *head_ref;
    *head_ref = new_node;
}
void reverseList(struct Node** head_ref) {
    struct Node *prev = NULL, *current = *head_ref, *next = NULL;
    while (current != NULL) {
        next = current->next; 
        current->next = prev; 
        prev = current; 
        current = next;
    }
    *head_ref = prev; 
}
void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL;
    insertAtBeginning(&head, 4);
    insertAtBeginning(&head, 3);
    insertAtBeginning(&head, 2);
    insertAtBeginning(&head, 1);
    printf("Linked list before reversal: ");
    printList(head);
    reverseList(&head);
    printf("Linked list after reversal: ");
    printList(head);
}
