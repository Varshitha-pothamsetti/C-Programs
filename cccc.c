#include<stdio.h>
int main(){
	int n,i,j,flag=0;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
		for(i=0;i<n-1;i++){
			for(j=0;j<n-1-i;j++){
				if(arr[j]<arr[j+1]){
					int temp=arr[j];
					arr[j]=arr[j+1];
					arr[j+1];temp;
					flag=1;
				}
		}
		if(flag==0){
			break;
		}
		printf("%d",arr[i]);
	}
}
