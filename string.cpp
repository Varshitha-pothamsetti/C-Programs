#include<stdio.h>
#include<string.h>
int main()
{
	char str1[]={"Ani"};
	char str2[]={"mal"};
	char str3[strlen(str1)+strlen(str2)];
	int position=0;
	int i=0;
	for(i=0;i<strlen(str1);i++)
	{
		str3[position]=str1[i];
		position=position+1;
		
	}
	for(i=0;i<strlen(str1);i++)
	{
		str3[position]=str2[i];
		position=position+1;
   }
   printf("%s",str3);
}
