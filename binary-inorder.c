#include<stdio.h>
#include<stdlib.h>

struct treenode{
	int data;
	struct treenode* left;
	struct treenode* right;
};
struct treenode* createAnode(int key){
	struct treenode* temp=(struct treenode*)malloc(sizeof(struct treenode));
	temp->data=key;
	temp->left=temp->right=NULL;
	return temp;
}
struct treenode* insert(struct treenode* root,int key){
	if(root==NULL){
		return createAnode(key);
	}
	if(root->data==key) return root;
	if(key<root->data){
		root->left=insert(root->left,key);
	}
	if(key>root->data){
		root->right=insert(root->right,key);
	}
	return root;
}
void inorder(struct treenode* root){
	if(root==NULL) return;
	inorder(root->left);
	printf("%d ",root->data);
	inorder(root->right);
}

int main(){
	int n,i;
	scanf("%d",&n);
	int nodes[n];
	for(i=0;i<n;i++){
		scanf("%d",&nodes[i]);
	}
	struct treenode* root=createAnode(nodes[0]);
	for(i=0;i<n;i++){
		root=insert(root,nodes[i]);
	}
	inorder(root);
}
