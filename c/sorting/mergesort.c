#include<stdio.h>
/*main function for calling the other functions*/
int main()
  {
     int arr[]={12,11,13,5,6,7};
     int arr_size=sizeof(arr)/sizeof(arr[0]);
     printf("Given array is \n");
     printArray(arr,arr_size);
     mergeSort(arr,0,arr_size-1);

     printf("\nsorted array is\n");
     printArray(arr,arr_size);
     return 0;
  }


/*for printing the array*/
void printArray(int a[],int size)
 {
    int i;
    for(i=0;i<size;i++)
    printf("%d ",a[i]);
 }

 void mergeSort(int a[],int l,int r)
   {
     if(l<r)
     {
         int m=l+(r-l)/2;

         mergeSort(a,l,m);
         mergeSort(a,m+1,r);
         merge(a,l,m,r);
     }
   }

void merge(int a[],int l,int m,int r)
   {

          int i,j,k;
          int n1=m-l+1;
          int n2=r-m;

          int L[n1],R[n2];

          for(i=0;i<n1;i++)
            L[i]=a[l+i];
          for(j=0;j<n2;j++)
            R[j]=a[m+1+j];

          i=0;
          j=0;
          k=l;

          while(i<n1 && j<n2)
          {


          }


   }

