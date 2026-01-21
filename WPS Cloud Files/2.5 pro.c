#include<stdio.h>
int main()
{
   int a[6/3];
   for(int i=1;i<6/3;i++)
   {
   	scanf("%d",&a[i]);
   }
   for(int i=0;i<6/3;i++)
   {
   	printf("&d",a[i]);
   }
}
