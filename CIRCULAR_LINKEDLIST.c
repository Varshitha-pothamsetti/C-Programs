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
  	newNode->next=NULL;
  	temp=temp->next;
  }
  temp->next=head;
  head=head->next;
  while(temp->next!=head){
  	printf("%d ",head->data);
  	head=head->next;
  }
}
  
