#include<stdio.h>
int main()
{
	int english,maths,physics,social,history,total;
	float average;
	scanf("%d%d%d%d%d",&english,&maths,&physics,&social,&history);
	total=english+maths+physics+social+history;
	average=total/5.0;
	printf("total marks of the student:%d\n",total);
	printf("average marks of the student:%.2f",average);
	return 0;
}
