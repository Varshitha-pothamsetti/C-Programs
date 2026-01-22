#include<stdio.h>
int main()
{
	int n,i,rem,rev,sum=0,d;
	scanf("%d",&n);
	int count=0;
	int temp=n;
	while(n!=0){
		rem=n%10;
		count=count+1;
		rev=rev*10+rem;
		n=n/10; 
	}
	int oddsum=0;
	i=0;
	while(rev!=0 && i<count)
	{
		int d=rev%10;
		
		if(i%2!=0)
		{
			oddsum=oddsum+d;
	    }
		rev=rev/10;
		i=i+1;
		}
     printf("%d",oddsum);
	}

