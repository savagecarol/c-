#include<stdio.h>
main()
{
int i,n,ele,a[100],max,c;
printf("Enter the number of elements...\n");
scanf("%d",&n);
printf("enter the element in array....\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the element you want to search...\n");
scanf("%d",&ele);
for(i=0;i<n;i++)
{
if(ele==a[i])
c=c+1;}
if(c>0)
printf("element found");
else
printf("element not found");
}



