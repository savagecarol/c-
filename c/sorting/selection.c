
/*name-kartikeya sharma
 class-cs-b batch-B2
 admission no.-2018bcs1067*/


#include<stdio.h>
int selectionsort(int *,int );
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
    selectionsort(&a,n);

 }
int selectionsort(int *p,int n)
   {
       int i,temp,j,k;
       for(i=0;i<n-1;i++)
       {
           k=i;
           for(j=i+1;j<n;j++)
           {
               if(*(p+j)<*(p+k))
               {
                   temp=*(p+j);
                   *(p+j)=*(p+k);
                   *(p+k)=temp;

               }
           }

       }
     printf("\n Sorted array is \n");
     for(i=0;i<n;i++)
     {
         printf("%d ",*(p+i));
     }
   }


   Enter the no. of elements in the array
6
Enter the elements of the array
5 9 3 7 5 8

 Sorted array is
3 5 5 7 8 9
Process returned 0 (0x0)   execution time : 20.046 s
Press any key to continue.
