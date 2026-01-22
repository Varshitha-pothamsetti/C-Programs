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
  	newNode->next=NULL;
  	temp->next=newNode;
  	temp=newNode;
  }
  int position=2;
  int p=1;
  temp=head->next;
  while(p!=position-1)
  {
  	temp=temp->next;
  	p++;
  }
  struct Node *x=temp->next;
  struct Node *newNode=(struct Node*)malloc(sizeof(struct node*));
  newNode->data=500;
  temp->next=newNode;
  newNode->next=x;
  head=head->next;
  while(head){
  	printf("%d ",head->data);
  	head=head->next;
  }
}
 

  
