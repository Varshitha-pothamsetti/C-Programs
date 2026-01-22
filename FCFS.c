#include<stdio.h>
int main(){
    int n;
    int at[10],bt[10],wt[10],tat[10],ct[10];
    float totaltat=0 ,totalwt=0;
    printf("Enter the total number of processes: ");
    scanf("%d %d",&n,&n);
    printf("\nEnter the Arrival Time and Burst time for each processes: ");
    int i;
    for(i=0;i<n;i++){
        printf("Process[%d]\n",i+1);
        printf("Arrival time :");
        scanf("%d",&at[i]);
        printf("Burst time :");
        scanf("%d",&bt[i]);
    }
    ct[0]=at[0]+bt[0];
    tat[0]=ct[0]-at[0];
    wt[0]=tat[0]-bt[0]; 
    int i;
    for(i=1;i<n;i++){
        if(at[i]> ct[i-1]){
            ct[i]=at[i]+bt[i];
        }else{
            ct[i]=ct[i-1]+bt[i];
        }
        tat[i]=ct[i]-at[i];
        wt[i]=tat[i]-bt[i];
    }
    for(int i=0;i<n;i++){
        totaltat+=tat[i];
        totalwt+=wt[i];
    }
    printf("\n Process \tAT\tBT\tCT\tTAT\tWT\n");
    for(int i=0;i<n;i++){
        printf("P %d\t%d\t%d\t%d\t%d\t%d",i+1,at[i],bt[i],ct[i],tat[i],wt[i]);
    }
    printf("\n Average turn around Time : %.2f\n",totalwt/n);
    printf("\n Average waiting time : %.2f\n",totaltat/n);

}

