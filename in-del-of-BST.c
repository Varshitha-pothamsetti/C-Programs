#include<stdio.h>
#include<stdlib.h>
struct TreeNode{
	int data;
	struct TreeNode *left;
	struct TreeNode *right;
};
struct TreeNode *CreateAnode(int key){
	struct TreeNode *temp=(struct TreeNode *)malloc(sizeof(struct TreeNode));
	temp->data=key;
	temp->left=temp->right=NULL;
	return temp;
}
struct TreeNode *insert(struct TreeNode *root,int key){
	if(root==NULL){
		return CreateAnode(key);
	}
	if(root->data==key)return root;
	if(key < root->data){
		root->left=insert(root->left,key);
	}
	if(key > root->data){
		root->right=insert(root->right,key);
	}
	return root; 
}
void inorder(struct TreeNode *root){
	if(root==NULL)return;
	inorder(root->left);
	printf("%d ",root->data);
	inorder(root->right);
	
}
//when the array is sorted
struct TreeNode *BSTinsert(int low,int high,int nodes[]){
	if(low > high)return NULL;//if low and high cross each other no dat to insert so simple return null
	if(low==high){
		return CreateAnode(nodes[low]);
	}
	// find the mid and this mid is your root
	int mid=(low+high)/2;
	struct TreeNode *root=CreateAnode(nodes[mid]);
	root->left=BSTinsert(low,mid-1,nodes);
	root->right=BSTinsert(mid+1,high,nodes);
	return root;
}
struct TreeNode *success(struct TreeNode *root){
	struct TreeNode *temp=root;
	temp=temp->right;
	while(temp && temp->left){
		temp=temp->left;
	}
	return temp;
}
struct TreeNode *Delete(struct TreeNode *root,int key){
	if(root==NULL)return NULL;
	if(key < root->data){
		root->left=Delete(root->left,key);
	}
	else if(key > root->data){
		root->right=Delete(root->right,key);
	}
	else{
		//one child no child
		if(root->left==NULL){
			struct TreeNode *temp=root->right;
			free(root);
			return temp;
		}
		if(root->right==NULL){
			struct TreeNode *temp=root->left;
			free(root);
			return temp;
		}
		//two childs
		struct TreeNode *curr=success(root->right);
		root->data=curr->data;
		root->right=Delete(root->right,curr->data);
	}
	return root;
}
int main(){
	int n,i;
	scanf("%d",&n);
	int nodes[n];
	for(i=0;i<n;i++){
		scanf("%d",&nodes[i]);
	}
	struct TreeNode *root=BSTinsert(0,n-1,nodes);
	int k;
	scanf("%d",&k);
	root=Delete(root,k);
	inorder(root);
}
