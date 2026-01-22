#include<stdio.h>
int main()
{
	float fahrenheit,celsius;
	scanf("%f",&fahrenheit);
	celsius=(fahrenheit-32)*5/9.0;
	printf("%2f\n",celsius);
	return 0;
}
