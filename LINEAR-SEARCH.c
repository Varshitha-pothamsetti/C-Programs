#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for (i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int search;
	scanf("%d",&search);
	for (i=0;i<n;i++){
	if(arr[i]==search){
		printf("array is present at:");
		printf("%d",i);
		break;
	}
	}
}
