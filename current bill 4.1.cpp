#include<stdio.h>
int main()
{
	float r;
	scanf("%f",&r);
	if(r<=199){
		r=r*1.20;
	}else if(r>=200&&r<400){
		r=r*1.50;
	}else if(r>=400 && r<600){
		r=r*1.80;
	}else if(r>=600){
		r=r*2.00;
	}
	if(r>=400){
		float sub=r*(15/100.0);
		r=sub+r;
	}else if(r<400){
		r=r+100;
	}
	printf("%.2f",r);
	return 0;
}
