#include<stdio.h>
int main()
{
int i,x,a[100],n,flag=0;
printf("enter the size of the array\n");
scanf("%d",&n);
printf("enter the elements of the array\n");
for(i=0;i<n;i++)
 {
   scanf("%d",&a[i]);
 }
 printf("enter the element you want to search\n");
 scanf("%d",&x);
for(i=0;i<10;i++)
 {
   if(x==a[i])
   {
       flag=1;
       break;
   }
 }
if(flag==1)
 {
   printf("element is found at the position %d",i+1);
 }
 else
    printf("element not found");
}

