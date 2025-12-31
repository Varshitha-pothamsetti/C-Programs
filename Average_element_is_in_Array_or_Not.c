#include<stdio.h>
int main()
{
    int n,i,sum=0,average,ispresent=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    average=sum/n;
    for(i=0;i<n;i++){
        if(arr[i]==average){
            ispresent=1;
            break;
        }
    }
    if(ispresent){
        printf("True
");
    }else{
        printf("False");
    }
}