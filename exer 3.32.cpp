#include<stdio.h>
int main()
{
	int i,j;
	scanf("%d %d",&i,&j);
	j=(i++)+(++i);
	printf("%d\n",j);
}
