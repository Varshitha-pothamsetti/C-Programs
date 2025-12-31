#include<stdio.h>
int main()
{
    int n,num1=0,num2=1,nextnum;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        if(i<=1){
            nextnum=i;
        }
        else
        {
            nextnum=num1+num2;
            num1=num2;
            num2=nextnum;
        }
        printf("%d ",nextnum);
    }
}