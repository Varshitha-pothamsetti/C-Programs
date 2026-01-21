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
  struct Node *tt = head;
  for(i=0;i<n;i++){
  	struct Node *newNode=(struct Node*)malloc(sizeof(struct node*));
  	newNode->data=arr[i];
  	temp->next=newNode;
  	temp=temp->next;
  }
  temp->next=NULL;
 head=head->next;
  while(head!=NULL){
  	printf("%d ",head->data);
  	head=head->next;
  }
int max=0;
  int min=999999;
  tt=tt->next;
  while(tt!=NULL){
  	if(tt->data<min){
	  	min=tt->data;
	  }
  	if(tt->data>max){
  		max=tt->data  ;
	  }
	  
    tt=tt->next;
	}

	  printf("%d\n",max);
	  printf("%d\n",min);
  }

  
