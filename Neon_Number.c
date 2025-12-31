#include<stdio.h>
int isNeonNumber(int num){
    int square=num*num;
    int sum=0;
    while(square!=0){
        sum+=square%10;
        square/=10;
    }
    return(sum==num);
}
int main(){
    int n;
    scanf("%d",&n);
    if(isNeonNumber(n)){
        printf("Neon Number
");
    }else{
        printf("Not Neon Number
");
    }
    return 0;
}