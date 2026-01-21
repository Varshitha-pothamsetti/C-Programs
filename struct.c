#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;
};
int main(){
  struct Node *Node1=(struct Node*)malloc(sizeof(struct node*));
	Node1->data=100;
	Node1->next=NULL;
  struct Node *Node2=(struct Node*)malloc(sizeof(struct node*));
	Node2->data=200;
	Node2->next=NULL;
	Node1->next=Node2;
	Node2->next=NULL;
	struct Node*temp=Node1;
	while(temp!=NULL){
	   printf("%d ",temp->data);	
	   temp=temp->next;
	}
	
}
