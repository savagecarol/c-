#include<stdio.h>
int main(){
    int n;
    printf("Enter Total Number of Process:");
    scanf("%d",&n);
    int bt[n],p[n],wt[n],tat[n],pr[n],i,j,total=0,pos,temp;
    float avg_wt,avg_tat;
    printf("Enter Burst Time and Priority\n");
    for(i=0;i<n;i++){
        scanf("%d %d",&bt[i],&pr[i]);
        p[i]=i+1;
    }
    for(i=0;i<n;i++){
        pos=i;
        for(j=i+1;j<n;j++){
            if(pr[j]<pr[pos])
                pos=j;
        }
        temp=pr[i];
        pr[i]=pr[pos];
        pr[pos]=temp;
        temp=bt[i];
        bt[i]=bt[pos];
        bt[pos]=temp;
        temp=p[i];
        p[i]=p[pos];
        p[pos]=temp;
    }
    wt[0]=0;
    for(i=1;i<n;i++){
        wt[i]=0;
        for(j=0;j<i;j++)
            wt[i]+=bt[j];
        total+=wt[i];
    }
    avg_wt=total/n;
    total=0;
    printf("\nProcess\t\t    BT    \t\tWT\t\tTAT");
    for(i=0;i<n;i++){
        tat[i]=bt[i]+wt[i];
        total+=tat[i];
        printf("\nP[%d]\t\t  %d\t\t    %d\t\t\t%d",p[i],bt[i],wt[i],tat[i]);
    }
    avg_tat=total/n;
    printf("\n\nAWT=%f",avg_wt);
    printf("\nATAT=%f\n",avg_tat);

return 0;
}


