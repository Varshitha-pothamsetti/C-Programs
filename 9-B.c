#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
typedef struct node Node;
Node *head=NULL;
void insert_at_tail(int val)
{
	Node *temp;
	Node *newnode=(Node *)malloc(sizeof(Node));
	newnode->data=val;
	newnode->next=NULL;
	if(head==NULL)
	{
		head=newnode;
		return;
	}
	else
	{
	     temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newnode;
	}
}
void delete_at_head()
{
	if(head==NULL)
	{
		printf("There are no nodes to delete\n");
	}
	else
	{
		head=head->next;
	}
}
void display()
{
	if(head==NULL)
	{
		printf("NO Nodes to display\n");
		return;
	}
	Node *temp=head;
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
	printf("\n");
}
int main()
{
	int ch;
	while(1)
	{
		printf("Enter\n1.Insert at tail\n2. Display\n3.delete at head\n4.any other to exit\n");
		scanf("%d",&ch);
		if(ch==1){
		int val;
	   printf("Enter a value for the node to be inserted: ");
	   scanf("%d",&val);
	   insert_at_tail(val);
    }
	else if(ch==2)
	{
		display();
	}
	else if(ch==3)
	{
		}
	else
	{
		printf("Thank you \n");
		break;
	}
		
	}
}
	
