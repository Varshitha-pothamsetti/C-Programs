#include<stdio.h>
#include<math.h>
int main()
{
	int n,temp,digit_count,sum=0;
	scanf("%d",&n);
	temp=n;
	digit_count=(int)log10(n)+1;
	while(temp){
		int cur_digit=temp%10;
		sum+=pow(cur_digit,digit_count);
		temp=temp/10;
	}
	if(sum==n){
		printf("%d is a Amstrong number",n);
	}
	else{
		printf("%d is Not Amstrong number",n);
	}
	
}
