#include<stdio.h>
int main()
{
	int n,i,arr[n];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int start=0,end=n-1,data;
	scanf("%d",&data);
	while(start<=end){
		int base=(start+end)/2;
		printf("%d",base);
	if(arr[base]==data){
		printf("data founded");
	}
	if(arr[base]<data){
		start=base+1;
		printf("%d",start);
	}
	else{
		end=base-1;
		printf("%d",end);
	}
}
}
