#include<stdio.h>
void fun(int n,int i)
{
 if(i==11){
 }	return;
 printf("%d x %d = %d\n",n,i,n*i);
 fun(n,i+1)
 }
 int main(){
 fun(2,1);
 return 0;
	
}
