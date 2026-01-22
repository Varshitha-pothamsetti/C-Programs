#include<stdio.h>
int main(){
	int n,i,j;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<=(1<<n)-1;i++){
		//int sum=0;
		for(j=0;j<n;j++){
			int mask=(1<<j);
			if((i & mask)>0){
				printf("%d ",arr[j]);
			}
		}
		printf("\n");
	}
}
