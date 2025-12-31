#include<stdio.h>
int main(){
    int c,r,n,s;
    scanf("%d",&n);
    for(r=1;r<=n;r++){
        for(s=1;s<=r-1;s++){
            printf(" ");
        }
        for(c=1;c<=n-r+1;c++){
            printf("%c ",64+r);
        }
        printf("
");
    }
    
}