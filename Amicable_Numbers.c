#include<stdio.h>
int sumofdivisors(int num){
 int sum=1;
 for(int i=2;i<=num/2;i++){
     if(num%i==0){
         sum+=i;
     }
 }
 return sum;
}
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    if(sumofdivisors(n)==m && sumofdivisors(m)==n){
        printf("Amicable
");
    }else{
        printf("Not Amicable");
    }
    return 0;
}