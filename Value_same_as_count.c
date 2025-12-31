#include<stdio.h>
#define max 1000
int main(){
    int n;
    int arr[max];
    int count[max]={0};
    int result=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]<max){
            count[arr[i]]++;
        }
    }
    for(int i=0;i<max;i++){
        if(count[i]==i && i!=0){
            result++;
    }
 }
printf("%d
",result);
    
}