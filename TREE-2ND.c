#include<stdio.h>
#include<stdlib.h>
struct treenode{
    int data;
    struct treenode* left;
    struct treenode* right;
};
struct treenode* creatatreenode(int val){
	struct treenode* root;
	root=(struct treenode*)malloc(sizeof(struct treenode));
	root->data=val;
	root->left=NULL;
	root->right=NULL;
	return root;
	
}
int main(){
	struct treenode* root=creatatreenode(10);
	struct treenode* leftpart=creatatreenode(50);
	root->left=leftpart;
	printf("%d",root->data);
	//printf("%d",root->left);		
}

