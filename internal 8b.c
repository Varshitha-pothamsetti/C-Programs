#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node *add,*pev;
};
typedef struct Node NODE;
NODE *Head=NULL;
void insert_at_head(int data)
{
	NODE *NN,*temp;
	NN=(NODE*)malloc(sizeof(NODE));
	NN->data=data;
	NN->add=NULL;
	NN->pev=NULL;
	if(Head==NULL)
	{
		Head=NN;
	}
	else
	{
		NN->add=Head;
		Head->pev=NN;
		Head=NN;
	}
}
int delete_at_end()
{
	NODE *temp;
	int val;
	if(Head==NULL)
	{
		return -1;
	}
	else if(Head->add==NULL)
	{
		temp=Head;
	}
temp=Head;
		val=temp->data;
		Head=NULL;
		return val;
	}
	else
	{
		temp=Head;
		while(temp->add->add!=NULL)
		{
			temp=temp->add;
		}
		val=temp->add->data;
		temp->add=NULL;
		return val;
	}
}
void display()
{
	NODE *temp;
	if(Head==NULL)
	{
		printf("No Nodes");
	}
	else
	{
		temp=Head;
		while(temp->add!=NULL)
		{
			printf("%d ",temp->data);
			temp=temp->add;
		}
		printf("%d ",temp->data);
	}
}
int main()
{
	int c,data,val,p;
	while(1)
	{
		printf("Enter\n1.Insert at Head\n2.Delete at End\n3.Display\n4.Exit\n");
		scanf("%d",&c);
		if(c==1)
		{
			printf("Enter the value to insert: ");
			scanf("%d",&data);
			insert_at_head(data);
		}
		else if(c==2)
		{
			val=delete_at_end();
			if(val==-1)
			{
				printf("No Nodes");
			}
		}
		else if(c==3)
		{
			display();
		}
		else
		{
			break;
		}
	}
}
int main()
{
	int c,data,val,p;
	while(1)
	{
		printf("Enter\n1.Insert at Head\n2.Delete at End\n3.Display\n4.Exit\n");
		scanf("%d",&c);
		if(c==1)
		{
			printf("Enter the value to insert: ");
			scanf("%d",&data);
			insert_at_head(data);
		}
		else if(c==2)
		{
			val=delete_at_end();
			if(val==-1)
			{
				printf("No Nodes");
			}
		}
		else if(c==3)
		{
			display();
		}
		else
		{
			break;
		}
	}
}int main()
{
	int c,data,val,p;
	while(1)
	{
		printf("Enter\n1.Insert at Head\n2.Delete at End\n3.Display\n4.Exit\n");
		scanf("%d",&c);
		if(c==1)
		{
			printf("Enter the value to insert: ");
			scanf("%d",&data);
			insert_at_head(data);
		}
		else if(c==2)
		{
			val=delete_at_end();
			if(val==-1)
			{
				printf("No Nodes");
			}
		}
		else if(c==3)
		{
			display();
		}
		else
		{
			break;
		}
	}
}
int main()
{
	int c,data,val,p;
	while(1)
	{
		printf("Enter\n1.Insert at Head\n2.Delete at End\n3.Display\n4.Exit\n");
		scanf("%d",&c);
		if(c==1)
		{
			printf("Enter the value to insert: ");
			scanf("%d",&data);
			insert_at_head(data);
		}
		else if(c==2)
		{
			val=delete_at_end();
			if(val==-1)
			{
				printf("No Nodes");
			}
		}
		else if(c==3)
		{
			display();
		}
		else
		{
			break;
		}
	}
}

