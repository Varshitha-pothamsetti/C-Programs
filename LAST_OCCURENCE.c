#include<stdio.h>
int lastocc(int *array,int n,int key){
	if(n==0)return -1;
	int sub=lastocc(array+1,n-1,key);
	if(sub==-1)
	{
	  if(array[0]==key)return 0;
	  else return -1;
    }
    return sub+1;
	
}
int main(){
	int array[]={11,39,60,6,8};
	int n=sizeof(array)/sizeof(int);
	int ans=lastocc(array,n,60);
	printf("%d",ans);
}
