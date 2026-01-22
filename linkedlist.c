#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
    int data;
    struct Node* next;
}Node;
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    while (!newNode) {
        printf("Memory allocation failed!\n");
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
void printList(Node* node) {
    while (node) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("Null\n");
}
int main() {
    Node* node1 = createNode(8);
    Node* node2 = createNode(18);
    Node* node3 = createNode(69);
    Node* node4 = createNode(47);
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
	printList(node1);
    return 0;
}

