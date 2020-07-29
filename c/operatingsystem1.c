#include<stdio.h>
void main()
{
    int at[10],bt[10],ct[10],tat[10],wt[10],i,n;
    float m,n1,avg_tat=0,avg_bt=0;
    printf("Enter the number of process :\n");
    scanf("%d",&n);
    printf("Enter the arrival time \n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&at[i]);
    }
    printf("Enter the burst time \n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&bt[i]);
    }
    for (i=0;i<n;i++)
    {
        if(i==0)
        {
            ct[i]=at[i]+bt[i];
            tat[i]=ct[i]-at[i];
            wt[i]=tat[i]-bt[i];
        }
        else
        {
            ct[i]=ct[i-1]+bt[i];
            tat[i]=ct[i]-at[i];
            wt[i]=tat[i]-bt[i];
        }

    }
   printf("the wauting time is \n");
    for(i=0;i<n;i++)
    {
        avg_tat+=tat[i];
        avg_bt+=bt[i];
        printf(" %d",wt[i]);
    }
    m=(avg_tat/n);
    n1=avg_bt/n;
    printf("The average tat is %f \n",m);
    printf("The average bt is %f \n",n1);



}




