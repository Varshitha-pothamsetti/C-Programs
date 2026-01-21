#include<stdio.h>
int main()
{
	int num=123;
	int sumofsquares=0;
	while(num>0){
		int digit=num%10;
		int a=digit*digit;
		sumofsquares= sumofsquares+a;
		num/=10;
	}
	printf("sumofsquresofdigit:%d\n",sumofsquares);
}
