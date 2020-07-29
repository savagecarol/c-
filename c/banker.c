#include<stdio.h>
void main()
{
    int all[10][10],av[10],max[10][10],need[10][10],i,j,n,m;
    printf("enter no. of processes and no. of resources\n");
    scanf("%d %d",&n,&m);
    printf("enter allocation matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&all[i][j]);
        }
    }

    printf("\nenter max matrix\n");
     for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&max[i][j]);
        }
    }
    printf("\nenter available matrix\n");
    for(i=0;i<m;i++)
    {
        scanf("%d",&av[i]);
    }
    printf("need matrix is\n");

         for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            need[i][j]=max[i][j]-all[i][j];
            printf("%d ",need[i][j]);
        }
        printf("\n");
    }
}
