#include<stdio.h>
int fun(int a)
{
	if(a==0)return 1;
	return a*fun(a-1);
}
int main()
{
	int b=fun(7);
	printf("%d",b);
	return 0;
}
