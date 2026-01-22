#include<stdio.h>
#include<stdlib.h>
int front=-1,rear=-1,*queue,size;
void enqueue(int val)
{
	if( (front==0 && rear==size-1) || front==rear+1)
	{
		printf("queue is overflow\n");
	}
	else
	{
		if(front==-1 && rear==-1)
		{
			front=0;
		}
		rear=(rear+1)%size;
		queue[rear]=val;
	}	
}
int dequeue()
{
	int val;
	if(front==-1 && rear==-1)
	{
		return -1;
	}
	if(front==rear)
	{
		val=queue[front];
		queue[front]=0;
		front=-1;
		rear=-1;
		return val;
		}
	val=queue[front];
	queue[front]=0;
	front=(front+1)%size;
	return val;
}
void display()
{
	int i;
	if(front==-1 && rear==-1)
	{
		printf("queue is under flow\n");
	}
	else
	{
		i=front;
		while(i!=rear)
		{
			printf("%d %d\n",i,queue[i]);
			i=(i+1)%size;
		}
		printf("%d %d\n",i,queue[i]);
		printf("\n");
	}
}
void main()
{
	int ch,val;
	printf("Enter the size of Queue: ");
	scanf("%d",&size);
	queue=(int *)calloc(size,sizeof(int));
	while(1)
	{
		printf("1.enqueue\n2.dequeue\n3.display\n4.Get Size\n5.Exit\n");
		scanf("%d",&ch);
		if(ch==1)
		{
			printf("Enter the value: ");
			scanf("%d",&val);
			enqueue(val);
		}
		else if (ch==2)
		{
			val=dequeue();
			if(val==-1)
			{
				printf("queue if underflow\n");
			}
			else
			{
				printf("%d\n",val);
			}
		}
		else if(ch==3)
		{
			display();
		}
		else if(ch==4)
		{
			printf("%d\n",size);
		}
		else{
			break;
		}
	}
}


