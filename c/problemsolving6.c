#include<stdio.h>
void main()
{
    int a[20][20],i,max,n,j;
    printf("Enter the no. of element in the row and coloumn\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
            scanf(" %d",&a[i][j]);
            }
        }
    for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
            if(a[i][j]!=0 && j<i)
            {
             k=1;
             break;
            }

            }
        }
        if(k==0)
        {
    printf("upper triangular matrix ");
        }
    else
    {
        printf("not upper triangular matrix ");
    }
}


