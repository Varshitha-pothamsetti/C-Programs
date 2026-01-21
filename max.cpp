#include<stdio.h>
int main()
{
	int a,b,c,max;
	printf("enter the numbers");
	scanf("%d%d%d",&a,&b,&c);
	max=a>b?(a>c?a:c):(b>c?b:c);
	printf("largest number among these numbers is %d",max);
	return 0;
}
