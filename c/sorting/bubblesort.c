#include<stdio.h>
int bubblesort(int *,int );
int main()
{
    int i,a[100],n;
    printf("Enter the no. of elements in the array \n");
    scanf("%d",&n);
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++)

    {
        scanf("%d",&a[i]);
    }
    bubblesort(&a,n);

}
int bubblesort(int *p,int n)
   {
       int i,temp,j;
       for(i=1;i<n;i++)
       {
           for(j=0;j<n-i;j++)
           {
               if(*(p+j)>*(p+j+1))
               {
                   temp=*(p+j);
                   *(p+j)=*(p+j+1);
                   *(p+j+1)=temp;

               }
           }

       }
     printf("\n Sorted array is \n");
     for(i=0;i<n;i++)
     {
         printf("%d ",*(p+i));
     }
   }

