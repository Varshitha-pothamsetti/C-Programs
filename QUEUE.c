#include<stdio.h>
int front=-1;
int rare=-1;
void enqueue(int data,int*ptr,int size)
{
	if(front-rare>=size){
		printf("queue is full");
	}
	else{
		ptr[front+1]=data;
		front++;
	}
}
	void dequeue(int *ptr){
		if (rare>front){
			printf("queue is empty");
		}
		else {
			rare++;
		}
	}
	void display(int*ptr){
		int i=0;
		for(i=0;i<=rare;i++)
		{
			printf("%d ",ptr[i]);
		}
	}
	int main(){
		int arr[5];
		int *ptr=arr;
		enqueue(10,ptr,5);
		enqueue(20,ptr,5);
		enqueue(30,ptr,5);
		enqueue(40,ptr,5);
		enqueue(50,ptr,5);
		dequeue(ptr);
		dequeue(ptr);
		//dequeue(ptr);
		//dequeue(ptr);
		display (ptr);
		return 0;
		
	}
