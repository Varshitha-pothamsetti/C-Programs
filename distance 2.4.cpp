#include<stdio.h>
int main()
{
	double speed,time,distance;
	scanf("%lf %lf %lf",&speed,&time,&distance);
	distance=speed*time;
	printf("%.2lf",distance);
}
