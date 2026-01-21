#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;
};
int main(){
	int n;
	scanf("%d",&n);
	int i=0;
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
  struct Node *head=(struct Node*)malloc(sizeof(struct node*));
  struct Node *temp=head;
  for(i=0;i<n;i++){
  	struct Node *newNode=(struct Node*)malloc(sizeof(struct node*));
  	newNode->data=arr[i];
  	temp->next=newNode;
  	temp=temp->next;
  }
  int item=2;
  int position=3;
  int p=1;
  while(p!=position-1)
  {
  	temp=temp->next;
  	p++;
  }
  struct Node *x=temp->next;
  struct Node *newNode=(struct Node*)malloc(sizeof(struct node*));
  newNode->data=120;
  temp->next=newNode;
}
 

  
