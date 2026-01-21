#include<stdio.h>
#include<math.h>
int main()
{
	float p,t,r,si,ci;
	printf("enter the principal amount(p): ");
	scanf("%f",&p);
	printf("enter time in year(t):");
	scanf("%f",&t);
	printf("enter rate in percente(r):");
	scanf("%f",&r);
	si=(p*t*r)/100;
	ci=p*(pow(1+r/100,t)-1);
	printf("simple intrest=%.3f\n",si);
	printf("compound intrest=%.3f",ci);
	return 0;
}
