
/*name-KARTIKEYA SHARMA
 class-CS-B batch-B2
  roll no.-1803210076 */

#include<stdio.h>
int main()
{


int i,x,a[100],n,flag=0,*p;
p=a;
printf("enter the size of the array\n");
scanf("%d",&n);
printf("enter the elements of the array\n");
for(i=0;i<n;i++)
 {
   scanf("%d",(p+i));
 }
 printf("enter the element you want to search\n");
 scanf("%d",&x);
for(i=0;i<10;i++)
 {
   if(x==*(p+i))
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


enter the size of the array
5
enter the elements of the array
1 4 67 8 7
enter the element you want to search
8
element is found at the position 4
Process returned 0 (0x0)   execution time : 27.366 s
Press any key to continue.
