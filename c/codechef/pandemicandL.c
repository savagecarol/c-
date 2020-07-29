#include<stdio.h>
# define MAX 100
int main()
{
    int k,s,i,t,n,a[MAX],x,q,b[MAX];
    scanf("%d",&x);
    for(q=0;q<x;q++)
    { k=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        t=0;
        for(i=0;i<n;i++)
        {
            if(a[i]==1)
            {
                b[t]=i+1;
                printf("%d",b[t]);
                t++;
                s=t;
            }
        }
        for(i=0;i<s-1;i++)
        {
            if((b[i+1]-b[i])<6)
            {
                k=1;
                break;
            }

        }
        if (k==1)
        {
            printf("NO");
        }
        else
        {
            printf("YES");
        }
    }

}
