#include<stdio.h>
int Issorted(int *array,int n){
	if(n==0 || n==1){
		return 1;
	}
	if(array[0]<=array[1] && Issorted(array+1,n-1)){
		return 1;
	}
	return 0;
}
int main(){
	//int n;
	int array[]={2,7,18,12};
	int n=sizeof(array)/sizeof(int);
	int ans=Issorted(array,n);
	printf("%d",ans);
	
}
