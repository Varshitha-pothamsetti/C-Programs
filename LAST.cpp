#include<stdio.h>
int Lastocc(int *array,int n,int key){
	if(n==0) return -1;
	int sub=Lastocc(array+1,n-1,key);
	if(sub==-1){
		if(array[0]==key){
			return 0;
			else return -1;
		}
	}
	return -1;
}
int main(){
	int array[]={6,5,7,8};
	int n=sizeof(array)/sizeof(int);
	int ans = Lastocc(array,n,8);
	printf("%d",ans);
	
}
