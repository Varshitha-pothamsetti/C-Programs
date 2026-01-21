#include <stdio.h>
#include <stdlib.h>
struct Node {
 int data;
 struct Node *prev;
 struct Node *next;
};
struct Node *createDNode(int data) {
 struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
 newNode->data = data;
 newNode->prev = NULL;
 newNode->next = NULL;
 return newNode;
}
void displayDoubleLinkedList(struct Node *head) {
 if (head == NULL) {
 printf("Double linked list is empty.\n");
 return;
 }
 struct Node *current = head;
 while (current != NULL) {
 printf("%d ", current->data);
 current = current->next;
 }
 printf("\n");
}
struct Node *createDoubleLinkedList() {
 struct Node *head = createDNode(1);
 struct Node *second = createDNode(2);
 head->next = second;
 second->prev = head;
 return head;
}
int main() {
 struct Node *head = createDoubleLinkedList();
 displayDoubleLinkedList(head);
}
