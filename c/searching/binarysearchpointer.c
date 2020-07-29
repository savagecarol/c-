#include <stdio.h>
int BinarySearch(int , int , int *, int );

int main()
{
    int n, i, a[20], h, l, x, r=0;
    int *p;

    printf("Enter the number of elements:\n");
    scanf("%d",&n);

    printf("Enter the elements:\n");
    for( i=0 ; i<n ; i++)
    {
        scanf("%d",&a[i]);
    }

    p = &a[0];
    printf("Enter the element to be searched:\n");
    scanf("%d", &x);

    l = 0;
    h = n-1;

    r = BinarySearch(l, h, p, x);

    if(r == 1)
    printf("The element %d is found in position %d", x, i);
    else
    printf("The element %d is not present in the array", x);

    return 0;
}

int BinarySearch(int l, int h, int *p, int x)
{
    int mid, a[20], f =0;
    *p = a[0];
    mid = ( l + h )/2;

    while( l <= h )
    {
        if( a[mid] == x )
        {
            f=1;
            break;
        }
        else if( a[mid] > x )
        {
            h = mid-1;
        }
        else if( a[mid] < x )
        {
            l = mid+1;
        }
    }
    if(f == 1)
    {return 1;}
    else
    {return -1;}
}
