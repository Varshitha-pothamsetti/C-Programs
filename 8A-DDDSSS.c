//insertion sort
#include<stdio.h>
int main()
{
	int n;
	printf("Enter no.of elements: ");
	scanf("%d",&n);
	int arr[n];
	int i,j,key;
	printf("Enter the elements: ");
	for(i=0;i<n;i++)scanf("%d",&arr[i]);
	for(i=1;i<n;i++)
	{
		key=arr[i];
		j=i-1;
		while(j>=0 && arr[j]>key)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	}
	printf("Sorted array: ");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	
}
