#include <stdio.h>
#include <stdlib.h>

// AVL Tree Node
typedef struct Node {
    int key;
    struct Node *left;
    struct Node *right;
    int height;
} Node;

// Function to get the height of the tree
int height(Node *N) {
    if (N == NULL)
        return 0;
    return N->height;
}
int max(int a , int b){
    return (a > b) ? a : b;
}
// Function to create a new node
Node* newNode(int key) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->key = key;
    node->left = NULL;
    node->right = NULL;
    node->height = 1;  // New node is initially added at leaf
    return(node);
}

// Right rotate the subtree rooted with y
Node *rightRotate(Node *y) {
    Node *x = y->left;
    Node *T2 = x->right;

    // Perform rotation
    x->right = y;
    y->left = T2;

    // Update heights
    y->height = max(height(y->left), height(y->right)) + 1;
    x->height = max(height(x->left), height(x->right)) + 1;

    // Return new root
    return x;
}

// Left rotate the subtree rooted with x
Node *leftRotate(Node *x) {
    Node *y = x->right;
    Node *T2 = y->left;

    // Perform rotation
    y->left = x;
    x->right = T2;

    // Update heights
    x->height = max(height(x->left), height(x->right)) + 1;
    y->height = max(height(y->left), height(y->right)) + 1;

    // Return new root
    return y;
}

// Get the balance factor of the node
int getBalance(Node *N) {
    if (N == NULL)
        return 0;
    return height(N->left) - height(N->right);
}

// Insert a key in the subtree rooted with node and return the new root of the subtree
Node* insert(Node* root, int key) {
    // 1. Perform the normal BST insertion
    if (root == NULL)
        return(newNode(key));

    if (key < root->key)
        root->left = insert(root->left, key);
    else if (key > root->key)
        root->right = insert(root->right, key);
    else // Equal keys are not allowed in BST
        return root;

    // 2. Update height of this ancestor node
    root->height = 1 + max(height(root->left), height(root->right));

    // 3. Get the balance factor of this ancestor node to check whether
    //    this node became unbalanced
    int balance = getBalance(root);

    // If this node becomes unbalanced, then there are 4 cases

    // Left Left Case
    if (balance > 1 && key < root->left->key)
        return rightRotate(root);

    // Right Right Case
    if (balance < -1 && key > root->right->key)
        return leftRotate(root);

    // Left Right Case
    if (balance > 1 && key > root->left->key) {
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }

    // Right Left Case
    if (balance < -1 && key < root->right->key) {
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }

    // Return the (unchanged) node pointer
    return root;
}
Node *minvalue(Node* root){
	Node *temp = root->right;
	while(temp && temp->left){
		temp = temp->left;
	}
	return temp;
}

// Utility function to print the tree (in-order traversal)
void inOrder(Node *root) {
    if (root != NULL) {
        inOrder(root->left);
        printf("%d ", root->key);
        inOrder(root->right);
    }
}

int main() {
	int n,i;
	scanf("%d",&n);
	int node[n];
	for(i=0;i<n;i++){
		scanf("%d",&node[i]);
	}
	
	Node *root = newNode(node[0]);
	for(i=0;i<n;i++){
		root = insert(root,node[i]);
	}
    inOrder(root);
}
