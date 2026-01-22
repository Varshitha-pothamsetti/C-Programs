#include<stdio.h>
#include<stdlib.h>
struct treeNode{
    int data;
    struct treeNode*left;
    struct treeNode*right;
};
struct treeNode* insert(struct treeNode* root,int key)
{
	if(root==NULL)
	{
		struct treeNode* newnode=(struct treeNode*)malloc(sizeof(struct treeNode*));
		newnode->data=key;
		newnode->left=NULL;
		newnode->right=NULL;
		return newnode;
	}
	if(root->data<key)
	{
		root->right=insert(root->right,key);
	}
	else{
		root->left=insert(root->left,key);
	}
	return root;
}
void display(struct treeNode* root)
{
	if(root==NULL) return;
	printf("%d ",root->data);
	display(root->left);
	display(root->right);
}
int main()
{
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++) scanf("%d",&arr[i]);
	struct treeNode* root=(struct treeNode*)malloc(sizeof(struct treeNode*));
	root->data=arr[0];
	root->left=NULL;
	root->right=NULL;
	for(i=1;i<n;i++)
	{
		insert(root,arr[i]);
	}
    display(root);
}
