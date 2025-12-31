#include<stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int mat[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    int x;
    scanf("%d",&x);
    int row=0,col=m-1;
    int found=0;
    while(row<n && col>=0){
        if(mat[row][col]==x){
            found=1;
            break;
        }else if(mat[row][col]>x){
            col--;
    }else{
        row++;
    }
}
if(found){
    printf("1
");
}else{
    printf("0
");
 }
 return 0;
}