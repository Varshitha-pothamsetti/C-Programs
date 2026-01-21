#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
}; 
typedef struct node Node;
Node *head = NULL;
Node *tail = NULL; 
int size=0;
void Enqueue(int val)
{
	Node *newNode = (Node *)malloc(sizeof(Node));
	newNode->data=val;
	newNode->next=NULL;
	if(head == NULL && tail == NULL)
	{
		head = newNode;
		tail = newNode;
	}
	else
	{
		tail->next=newNode;
		tail = newNode;
	}
	size++;	
}
void Dequeue()
{
	if(head == NULL && tail == NULL)
	{
		printf("Queue is empty\n");
		return;
	}
	Node *toDeleted = head;
	head = head->next;
	if(head == NULL)
	{
		tail = NULL;
	}
	size--;
	free(toDeleted);
}
void Display()
{
	if(head == NULL && tail ==NULL)
	{
		printf("Queue is empty\n");
		return;
	}
	Node *temp = head;
	while(temp != NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
	printf("\n");
}
void getfront()
{
	if(head == NULL && tail ==NULL)
	{
		printf("Queue is empty\n");
		return;
	}
	printf("Front: %d\n",head->data);
}
void getrear()
{
	if(head == NULL && tail ==NULL)
	{
		printf("Queue is empty\n");
		return;
	}
	printf("Rear: %d\n",tail->data);
}
void getsize()
{
	printf("Size is: %d",size);
}
void Is_Empty(){
	if(head==NULL && tail==NULL){
		printf("Queue is Empty");
	}
	else {
		printf("%d \n",head->data);
	}
}
int main()
{
	int ch;
	while(1)
	{
		printf("Enter\n1. Enqueue\n2. Dequeue\n3. Display\n4. getsize\n5. getfront\n6. getrear\n7.Is_Empty\n");
		scanf("%d",&ch);
		if(ch == 1)
		{
			int val;
			printf("Enter the value: ");
			scanf("%d",&val);
			Enqueue(val);
		}
		else if(ch == 2)
		{
		   Dequeue();	
		}
		else if(ch == 3)
		{
			Display();
		}
		else if(ch == 4)
		{
		    getsize();	
		}
		else if(ch == 5)
		{
			getfront();
		}
		else if(ch ==6)
	//	else if(ch == 6)
		{
			getrear();
		}
		else if(ch==7)
		{
			Is_Empty();
		}
	}
}

