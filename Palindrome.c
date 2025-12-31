#include<stdio.h>
int main(){
    int n,originalnum,revnum=0,remainder;
    scanf("%d",&n);
    originalnum=n;
    while(n!=0){
        remainder=n%10;
        revnum=revnum*10+remainder;
        n/=10;
    }
    if(originalnum==revnum){
        printf("True
");
    }
    else{
        printf("False
");
    }
    return 0;
}