#include<stdio.h>
int main(){
    int n;
    int isbinary=1;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        int element;
        scanf("%d",&element);
        if(element!=0 && element!=1){
            isbinary=0;
        }
    }
    if(isbinary){
        printf("True
");
    }
    else
    {
        printf("False");
    }
    
}