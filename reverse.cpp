#include<stdio.h>
void fun(int n)
{
	if(n<1){
		return;
	}
	fun(n/10);
	printf("%d ",n%10);
}
int main(){
	fun(1246);
	return 0;
}
