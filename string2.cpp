#include<stdio.h>
#include<string.h>
int main()
{
	char str1[6]="Ani";
	char str2[6]="mal";
	int i=0,j=0;
	char str3[90];
	while(str1[i]!=0){
		str3[j]=str1[i];
		i++;
		j++;
	}
	i=0;
	while(str2[i]!=0){
		str3[j]=str2[i];
		i++;
		j++;
	}
	str3[j]=0;
	scanf("%s",str3);
	return 0;
}
