#include<stdio.h>
#include<stdlib.h>
struct treeNode{
    int data;
    struct treeNode*left;
    struct treeNode*right;
};
struct treeNode* construct(int index,int arr[],int size)
{
	if(index<size){
		struct treeNode*root=(struct treeNode*)malloc(sizeof(struct treeNode*));
		root->data=arr[index];
		root->left=construct(2*index+1,arr,size);
		root->right=construct(2*index+2,arr,size);
		return root;
	}
	else{
		return NULL;
	}
}
void display(struct treeNode*root)
{
 		if(root==NULL) return;
 		display(root->left);
 		printf("%d ",root->data);
 		display(root->right);
}
int main()
{
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++) scanf("%d",&arr[i]);
	struct treeNode *root=construct(0,arr,n);
	display(root);
}

