#include<stdio.h>
int main(){
	int n,i,j;
	scanf("%d",&n);
	//int index=0;
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		int index=i;
		for(j=i;j<n;j++){
			if(arr[j]<arr[index])
			{
				index=j;
			}
		}
		int temp=arr[i];
			arr[i]=arr[index];
			arr[index]=temp;
		printf("%d ",arr[i]);
	}
} 
