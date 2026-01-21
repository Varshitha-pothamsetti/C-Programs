#include<stdio.h>
#include<stdlib.h>
struct dnode{
	int data;
	struct dnode* prev;
	struct dnone* next;
};
struct dnode* creatednode(int data){
	struct dnode* newnode=(struct dnode*)malloc(sizeof(struct dnode));
	newnode->data=data;
	newnode->prev=NULL;
	newnode->next=NULL;
	return newnode;
}
void DisplayDoubleLinkedlist(struct dnode* head){
	if(head==NULL){
		printf("double linked list is empty.\n");
		return ;
	}
	struct DNode *current = head;
 while (current != NULL) {
 printf("%d ",current->data);
 current = current->next;
 }
	printf("\n");
}
struct dnode* CreateDoubleLinkedlist(){
	struct dnode* head=creatednode(1);
	struct dnode* second=creatednode(2);
	head->next=second;
	second->prev=head;
	return head;
}
int main(){
struct dnode* head= CreateDoubLelinkedlist();
DisplayDoubleLinkedlist(head);
}
