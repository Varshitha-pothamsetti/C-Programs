#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count[101]={0};
    for(int i=0;i<n;i++){
        if(arr[i]<=100){
            count[arr[i]]++;
        }
    }
    int found=0;
    for(int i=0;i<n;i++){
        if(arr[i]<=100 && count[arr[i]]==arr[i]){
            printf("%d ",arr[i]);
            count[arr[i]]=-1;
            found=1;
        }
    }
    if(!found){
        printf("-1");
    }
    printf("
");
}