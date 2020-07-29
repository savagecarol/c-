#include<stdio.h>
int main()
{
    int n,i=0,a[100],j;
    printf("Enter the no. that you want to convert ");
    scanf("%d",&n);
    for(;n>0;)
    {
        if(n%2==0 && n!=1)
        {
            a[i]=0;
            n=n/2;
        }
         else if(n%2!=0 && n!=1)
        {
            a[i]=1;
            n=n/2;
        }
        else
        {
            a[i]=1;
            n=n/2;
        }
        i++;
    }
       for(j=0;j<i;j++)
       {
           printf("%d",a[i-j]);
       }

    }


