#include<stdio.h>
int main(){
    int c,r,n;
    scanf("%d",&n);
    for(r=n;r>=1;r--){
        for(c=n;c>=1;c--){
            if(r==c|| c==n-r+1){
                printf("*");
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