#include<stdio.h>
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int i,j;
	int arr[n];
	for(i=0;i<n;i++)scanf("%d",&arr[i]);
	int brr[m];
	for(j=0;j<m;j++)scanf("%d",&brr[j]);
	int result[n+m],k=0;
	i=0;
	j=0;
	while(i<n && j<m){
		if(arr[i]<brr[j]){
			result[k]=arr[i];
			i++;
			k++;
		}
		else{
			result[k]=brr[j];
			j++;
			k++;
		}
	}
		while(i<n){
			result[k]=arr[i];
			i++;
			k++;
		}
		while(j<m){
			result[k]=brr[j];
			j++;
			k++;
		}
		for(i=0;i<n+m;i++){
			printf("%d ",result[i]);
		}
}
