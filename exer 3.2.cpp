#include<stdio.h>
int main()
{
	int a,b,c,r,l,h;
	scanf("%d %d %d %d %d %d",&a,&b,&c,&r,&l,&h);
	float circle=3.14*r*r;
	float square=a*a;
	float rectangle=l*b;
	float triangle=0.5*c*h;
	printf("%.2f %.2f %.2f %.2f %.2f",circle,square,rectangle,triangle);
}
