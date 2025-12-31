#include<stdio.h>
int iselementpresent(int arr[],int size,int element){
    for(int i=0;i<size;i++){
        if(arr[i]==element){
            return 1;
        }
    }
    return 0;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int element;
    scanf("%d",&element);
    if(iselementpresent(arr,n,element)){
        printf("True
");
    }
    else
    {
        printf("False
");
    }
    return 0;
}