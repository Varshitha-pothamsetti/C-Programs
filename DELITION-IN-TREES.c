#include<stdio.h>
#include<stdlib.h>
struct treeNode{
    int data;
    struct treeNode*left;
    struct treeNode*right;
};
int getmin(struct treeNode* root){
	struct treeNode* temp=root;
	while(temp->left!=NULL){
		temp=temp->left;
	}
	return temp->data;
}
struct treeNode* delete(struct treeNode* root,int key){
	if(root==NULL) return NULL;
	else if(root->data<key){
	root->right=delete(root->right,key);
	}
	else if(root->data>key){
		root->left=delete(root->left,key);
	}
	else{
		if(root->left==NULL && root->right==NULL){
			free(root);
			return NULL;
		}
		else if(root->left!=NULL){
			struct treeNode* temp=root;
			free(root);
			return temp->right; 
		}
		else if(root->right!=NULL){
			struct treeNode* temp=root;
			free(root);
			return temp->left;
		}
		else{
			int value=getmin(root->right);
			root->data=value;
			root->right=delete(root->right,value);
		}
	}
	return root;
}
int n,i;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++) scanf("%d",&arr[i]);
struct treeNode* root(struct treeNode*)malloc(sizeof(struct treeNode*));
root->data=arr[0];
root->left=NULL;
root->right=NULL;
for(i=1;i<n;i++){
	insert(root)
for(i=1;i<n;i++){
		Insert(Root,arr[i]);
	}
	int key;
	printf("enter value to delete");
	scanf("%d",&key);
	Root = Delete(Root,key);
	Display(Root);
}




	
