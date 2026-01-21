#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	for(i=1;i<11;i=i+1)
	{
		printf("%dX%d=%d\n",n,i,n*i);
	}
}
