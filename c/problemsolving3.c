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
    max=a[0][0];
    for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
            if(a[i][j]>=max)
            {
                max=a[i][j];
            }
            }
        }
    printf("The largest element is %d", max);
}

