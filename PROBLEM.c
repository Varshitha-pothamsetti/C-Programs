#include<stdio.h>
int main(){
	int n,i,j;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int flag=0;
	for(i=0;i<(1<<n)-1;i++){
		int sum=0;
		for(j=0;j<n;j++){
			int mask=(1<<j);
			if((i & mask)>0){
				sum+=arr[j];
			}
				else
				{
					sum-=arr[j];
				}
			}
			if(sum%360==0){
				flag=1;
				break;
		}
	}
	if(flag==1){
		printf("yes");
	}
		else{
			printf("no");
		}
	}
