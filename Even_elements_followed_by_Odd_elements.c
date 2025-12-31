#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    int evenarray[n],oddarray[n];
    int evencount=0,oddcount=0;
    for(int i=0;i<n;i++){
        if(array[i]%2==0){
            evenarray[evencount++]=array[i];
        }else{
            oddarray[oddcount++]=array[i];
        }
    }
    for(int i=0;i<evencount;i++){
        printf("%d ",evenarray[i]);
    }
    for(int i=0;i<oddcount;i++){
        printf("%d ",oddarray[i]);
    }
    return 0;
}