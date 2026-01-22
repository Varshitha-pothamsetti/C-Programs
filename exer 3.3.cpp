#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	float c;
	double d;
	scanf("%f",&c);
	scanf("%lf",&d);
	double result=a/b*c-b+a*d/3;
	printf("%.2lf",result);
}
