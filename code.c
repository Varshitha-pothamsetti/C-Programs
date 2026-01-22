#include <stdio.h>
#include <stdlib.h>
struct DNode {
 int data;
 struct DNode *prev;
 struct DNode *next;
};
struct DNode *createDNode(int data) {
 struct DNode *newNode = (struct DNode *)malloc(sizeof(struct DNode));
 newNode->data = data;
 newNode->prev = NULL;
 newNode->next = NULL;
 return newNode;
}
void displayDoubleLinkedList(struct DNode *head) {
 if (head == NULL) {
 printf("Double linked list is empty.\n");
 return;
 }
 struct DNode *current = head;
 while (current != NULL) {
 printf("%d ", current->data);
 current = current->next;
 }
 printf("\n");
}
struct DNode *createDoubleLinkedList() {
 struct DNode *head = createDNode(1);
 struct DNode *second = createDNode(2);
 head->next = second;
 second->prev = head;
 return head;
}
int main() {
 struct DNode *head = createDoubleLinkedList();
 displayDoubleLinkedList(head);
}
