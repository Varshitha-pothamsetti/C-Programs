#include<stdio.h>
int main()
{
	int i=0,j=0;
	int arr[3][3];
	for(i=0;i<3;i=i+1){
		for(j=0;j<3;j++)
		{
			scanf("%d",&arr[i][j]);
		}
		printf("%d",arr[3][3]);
	}
}
