#include<stdio.h>
int main()
{
	int i;
	float f;
	char c;
	char s[40];
	scanf("%d",&i);
	scanf("%f",&f);
	scanf(" %c",&c);
	scanf("%s",&s);
	printf("integer:%d\n",i);
	printf("float:%.2f\n",f);
	printf("character:%c\n",c);
	printf("string:%s\n",s);
}
