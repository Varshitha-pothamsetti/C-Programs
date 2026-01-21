#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
	struct node *prev;
};
int main(){
	int n,i,right,left;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)scanf("%d",&arr[i]);
    struct node* temp=(struct node*)malloc(sizeof(struct node*));
	struct node* temp=head;
	for(i=0;i<n;i++)
	{
	struct node* newnode=(struct node*)malloc(sizeof(struct node*));
	newnode->data=arr[i];
	temp->next=right;
	newnode->prev=temp;
	temp=temp->left;
}
	temp->next=NULL;
	head=head->next;
	head->prev=NULL;
	while(head!=NULL)
	{
		printf("%d ",head->data);
		head=head->next;	
    }
    printf("\n");
    while(temp!=NULL)
	{
    	printf("%d ",temp->data);
    	temp=temp->prev;
	}
  }
