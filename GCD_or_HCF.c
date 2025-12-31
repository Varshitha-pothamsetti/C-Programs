#include<stdio.h>
int findGcd(int a,int b){
    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int gcd=findGcd(n,m);
    printf("%d
",gcd);
}