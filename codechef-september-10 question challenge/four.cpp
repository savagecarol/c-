#include<iostream>
#include<math.h>
using namespace std;
double Root(long long int c)
{
        int a=1;
        int b=1;
     int d  = b*b - 4*a*c;
     double p;
     double sqrt_val = sqrt(abs(d));
     if (d > 0)
     {
         p=(double)(-b + sqrt_val)/(2*a);
     }
     else if (d == 0)
     {
         p=-(double)b / (2*a);
     }
     return p;
}


int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int k= (n * (n+1))/2;
        if(k%2==0)
         {
             k= -1 * k;
        double p=Root(k);

        if(p==int(p))
        {
           long long int r= ((p*(p-1))/2) + (((n-p)*((n-p)-1))/2) + (n-p) ;
           cout<<r;
        }

          else
        {
           cout<<n-int(p);
        }

        cout<<endl;
         }
         else
      cout<<0<<endl;
    }
    return 0;
}
