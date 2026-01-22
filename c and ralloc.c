#include<stdio.h>
#include<stdlib.h>
int main(){
	int* ptr1=(int*)calloc(4,sizeof (int));
	int i=0;
	ptr1[0]=10;
	ptr1[1]=20;
	ptr1[2]=30;
	ptr1[3]=40;
	for(i=0;i<4;i++)
	{
		printf("%d ",ptr1[i]);
	}
	printf("\n");
	ptr1=(int*)realloc(ptr1,10*sizeof(int));
	for(i=0;i<10;i++)
	{
		printf("%d ",ptr1[i]);
	}
}
