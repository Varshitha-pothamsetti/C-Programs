#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int a,b;
    scanf("%d %d",&a,&b);
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]<a||arr[i]>b){
            printf("%d ",arr[i]);
            count++;
    }
}
if(count==0){
printf("-1");
 }
return 0;
}