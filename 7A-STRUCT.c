#include<stdio.h>
int main()
{
	int n;
	printf("Enter no.of elements:");
	scanf("%d",&n);
	printf("Enter the Elements: ");
	int arr[n],i,j,temp,min=0;
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Sorted Array: ");
	for(i=0;i<n;i++){
		min=i;
		for(j=i+1;j<n;j++){
			if(arr[j]<arr[min]){
				min=j;
			}
		}
		    temp=arr[min];
			arr[min]=arr[i];
			arr[i]=temp;
			printf("%d ",arr[i]);

}
}
