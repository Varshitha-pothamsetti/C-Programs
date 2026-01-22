#include<stdio.h>
int main()
{
	int n,largestdigit=0,digit;
	scanf("%d",&n);
	while (n>0)
	int digit =n%10;
	if (digit>largestdigit){
		largestdigit=digit;
	}
	n/=10;
    int	a=largestdigit;
	printf("%d",a);
}
