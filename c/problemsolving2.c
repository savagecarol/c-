#include<stdio.h>
void main()
{
    int a[20],i,max,n,k;
    printf("Enter the no. of element in the array\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
        for(i=0;i<n;i++)
        {
            scanf(" %d",&a[i]);
        }
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>=max)
        {
            max=a[i];
        }
    }
    k=max;
    max=a[0];
      for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            continue;
        }
    else if(a[i]>=max)
        {
            max=a[i];
        }
    }
    printf("the second largest element is %d",max);
}

