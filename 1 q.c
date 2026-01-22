#include<stdio.h>
int main(){
	int n,i,j;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		int min=i;
		for(j=i;j<n;j++){
			if(arr[j]<arr[min])
			{
				min=j;
			}
		}
		int temp=arr[i];
			arr[i]=arr[min];
			arr[min]=temp;
		printf("%d ",arr[i]);
	}
} 
