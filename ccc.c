#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[4],i=4;
	while(n>0)
	{
	 arr[i]=n%10;
	 i=i-1;
	 n=n/10;
	}
	for(i=0;i<=4;i=i+1)
	{
		printf("%d",arr[i]);
	}
	
}
