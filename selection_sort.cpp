#include<stdio.h>
int main(){
	int n,i,j;
	int index=0;
	int arr[n];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		index=i;
		for(int j=i;j<n;j++)
		{
			if(arr[j]<arr[i])
			{
				index=j;
			}
			arr[i]=arr[index];
		}
		printf("%d",arr[index]);
	}
}
