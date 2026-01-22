#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};
struct Node *createNode(int data) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}
struct Node *insert(struct Node *root, int data) {
    if (root == NULL) {
        return createNode(data);
    }
    if (data < root->data) {
        root->left = insert(root->left, data);
    } else if (data > root->data) {
        root->right = insert(root->right, data);
    }
    return root;
}
void preOrder(struct Node *root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}
void inOrder(struct Node *root) {
	 if (root != NULL) {
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}
void postOrder(struct Node *root) {
    if (root != NULL) {
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ", root->data);
    }
}
int main() {
    struct Node *root = NULL;
    int choice, data, key;
    do {
        printf("Enter\n1. Insert\n2.Pre Order\n3. Inorder Traversal\n4.Postorder\n5.Exit\n");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter data to insert: ");
                scanf("%d", &data);
                root = insert(root, data);
                break;
            case 2:
                printf("PreOrder Traversal: ");
                preOrder(root);
                printf("\n");
                break;
            case 3:
                printf("Inorder Traversal: ");
                inOrder(root);
                printf("\n");
                break;
            case 4:
            	printf("Post Order");
                postOrder(root);
                printf("\n");
                break;
            case 5:
            	printf("exit");
            	break;
            default:
                printf("Invalid choice\n");
        }
    } while (choice != 5);
}
	
