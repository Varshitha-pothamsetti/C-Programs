#include<stdio.h>
int quicksort(int arr[],int start,int end)
{
	int pivot=arr[end];
	int i=start-1,j;
	for(j=start;j<=end;j++){
		if(arr[j]<pivot){
			i++;
			int temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}
	int temp=arr[end];
	arr[end]=arr[i+1];
	arr[i+1]=temp;
	return i+1;
}
void partition(int arr[],int start,int end)
{
	if(start<end){
		int index=quicksort(arr,start,end);
		partition(arr,start,index-1);
		partition(arr,index+1,end);
	}
}
int main(){
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++) scanf("%d",&arr[i]);
	partition(arr,0,n-1);
	for(i=0;i<n;i++) printf("%d ",arr[i]);
}
