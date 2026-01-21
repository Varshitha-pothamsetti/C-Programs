#include<stdio.h>
int FirstOcc(int *array,int n,int key){
	if(n==0){
		return -1;
	}
	if(array[0]==key){
		return 0;
		int sub=FirstOcc(array+1,n-1,key);
		if(sub!=-1){
			return sub+=1;
		}
		return -1;
	}
}
int main(){
	int array[]={2,7,18,12};
	int n=sizeof(array)/sizeof(int);
	int ans=FirstOcc(array,n,18);
	printf("%d",ans);
	
}
