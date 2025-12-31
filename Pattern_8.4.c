#include<stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==j|| j==n-i+1){
                printf("%c",64+i);
            }
            else
            {
                printf(" ");
            }
        }
        printf("
");
    }
}