#include<stdio.h>
int largestdigit(int num){
int largestdigit=0;
while(num>0){
 int digit=num%10;
if (digit>largestdigit){
	largestdigit=digit;
}
num/=10;
}
return largestdigit;
}
int main()
{
	int num;
	scanf("%d",&num);
	int result=largestdigit(num);
	printf("%d",result);
}

