#include<stdio.h>
#define MAX_SIZE 1000
void HeapifyUp(int Max_heap[],int idx){
	//basecase
	if(idx==0){
		//check the possibility to swap
		
	}
	int parent=(idx%2==0)?idx/2-1:idx/2;
	if(Max_heap[idx]>Max_heap[parent]){
		int temp=Max_heap[idx];
		Max_heap[idx]=Max_heap[parent];
		Max_heap[parent]=temp;
		HeapifyUp(Max_heap,idx);
	}
}
void Insert(int Max_heap[],int data,int *idx){
	(*idx)++;
		if((*idx)>MAX_SIZE){
			printf("my heap is full\n");
			return;
		}
		Max_heap[*idx]=data;
		HeapifyUp(Max_heap,(*idx));
}

void Print(int Max_heap[],int size){
	int i;
	for (i=0;i<size;i++){
		printf("%d ",Max_heap[i]);
	}
	printf("\n");
}
int main(){
	int Max_heap[MAX_SIZE];
	int idx=0;
	Insert(Max_heap,50,&idx);
	Insert(Max_heap,50,&idx);
	Insert(Max_heap,10,&idx);
	Insert(Max_heap,70,&idx);
	Insert(Max_heap,40,&idx);
	Insert(Max_heap,20,&idx);
	Print(Max_heap,idx);
}
