#include<stdio.h>
int main(){
	int n,i;
	printf("Enter the size of Array: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements: ");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Reverse of given Array: ");
	for(i=n-1;i>=0;i--){
		printf("%d ",arr[i]);
	}	
}
