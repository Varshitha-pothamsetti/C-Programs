#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,k;
    int arr[100];
    int frequency[1001]={0};
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        frequency[arr[i]]++;
    }
    scanf("%d",&k);
    int found=0;
    for(int i=0;i<1001;i++){
        if(frequency[i]==k){
            printf("%d ",i);
            found=1;
        }
    }
if(!found){
    printf("-1");
}
return 0;
}