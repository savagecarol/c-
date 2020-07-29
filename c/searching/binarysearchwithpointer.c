
/*name-KARTIKEYA SHARMA
 class-CS-B batch-B2
  roll no.-1803210076 */

#include<stdio.h>
int main()
{
int i,x,a[100],n,flag=0,*p,mid,last,first=0;
p=a;
printf("enter the size of the array\n");
scanf("%d",&n);
last=n-1;
printf("enter the elements of the array\n");
for(i=0;i<n;i++)
 {
   scanf("%d",(p+i));
 }
 printf("enter the element you want to search\n");
 scanf("%d",&x);
 while(first<=last)
   {
        mid=(last+first)/2;
        if(x==*(p+mid))
        {
            flag=1;
            break;
        }
        else if(x>*(p+mid))
        {
            first=mid+1;
        }
        else if(x<*(p+mid))
        {
            last=mid-1;
        }
   }
   if(flag==1)
 {
   printf("element is found at the position %d",mid+1);
 }
 else
    printf("element not found");
}



enter the elements of the array
1 2 3 4 5
enter the element you want to search
3
element is found at the position 3

...Program finished with exit code 0
Press ENTER to exit console.
