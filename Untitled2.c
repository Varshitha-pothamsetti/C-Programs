#include<stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	int arr[5]={9,8,6,0,-1};
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	for (i=0;i<n;i++){
		for (j=i;j<n;j++){
			if (arr[0]>arr[j]){
				int temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}
	for (j=0;j<n;j++){
		printf("%d ",arr[j]);
	}
}
