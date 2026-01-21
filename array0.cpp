#include<stdio.h>
int main()
{
	int n,i,rev,sum=0;
	scanf("%d",&n);
	int count=0;
	int temp=n;
	while(n!=10){
	int ren=n%10;
		count=count+1;
		rev=rev*10+rev;
		n=n/10;
	}
	int oddsum=0;
	int i=1;
	while(rev i=0 && i<=count){
		int d=rev%10;
	}
	if(i%2!=0)
	{
		oddsum=oddsum+d
	}
	rev=rev/10;
	i=i+1;
	printf("%d",oddsum)
}
