#include<stdio.h>
void buddy(int* ptr,int n){
	int i=0;
	for(i=0;i<n;i++)
    {
		printf("%d ",ptr[i]);
	}
}
int main(){
	int arr[7]={10,20,30,40,50,60,70};
	buddy(arr,7);
}
