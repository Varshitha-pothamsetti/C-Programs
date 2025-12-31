#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int odd[n],even[n];
    int oddcount=0,evencount=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==1){
            odd[oddcount++]=arr[i];
        }else{
            even[evencount++]=arr[i];
        }
    }
    for(int i=0;i<oddcount;i++){
        printf("%d ",odd[i]);
    }
    for(int i=0;i<evencount;i++){
        printf("%d ",even[i]);
    }
    return 0;
}