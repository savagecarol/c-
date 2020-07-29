#include<stdio.h>
main()
{
    int at[20],bt[20],tat[20],wt[20],b[10],n,i,t=0,s=0;
    float sumt=0 ,sumw=0,avgt=0,avgw=0;
    printf("Enter the no. of the process:\n");
    scanf("%d",&n);
    printf("enter the arrival time:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&at[i]);
    }
    printf("enter the burst time:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&bt[i]);
        b[i]=bt[i];
    }
    for(i=0;i<n;i++)
    {
        int m=500;
        for(int j=0;j<n;j++)
        {
            if(bt[j]<m && bt[j]>0 && at[j]<=t)
            {
                s=j;
                m=b[j];
            }
        }
            t=t+bt[s];
            tat[s]=t-at[s];
            wt[s]=tat[s]-bt[s];
            bt[s]=0;
    }
            printf("------------table--------\n");
            for(i=0;i<n;i++)
            {

                printf("p %d %d %d %d %d \n",i,at[i],bt[i],tat[i],wt[i]);
            }
            for(i=0;i<n;i++)
            {
                sumt=tat[i]+sumt;
                sumw=wt[i]+sumw;
            }
            avgt=(float)sumt/n;
            avgw=(float)sumw/n;
            printf("average turn around time is %f \n average waiting time is %f ",avgt,avgw);


}
