#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{
    ll t;
    cin>>t;
    while(t--)
    {   
        int n;
        cin>>n;
        int arr[n];

        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

    if(n%2==0)
    {
        int res = 0;
        for(int i=0;i<n; i=i+2)
        {
            if(arr[i]%2==0  && arr[i+1]%2==0)
            {
                continue;
            }
            else if(arr[i]%2!=0  && arr[i+1]%2!=0)
            {
                res++;
            }
            else
            {
                res = res + 2;
            }
        }
        cout<< res << endl;
    }
    else
        {


        int res = 0;
        int k = 0;
        for(int i=0;i<n-1; i=i+2)
        {
            if(arr[i]%2==0  && arr[i+1]%2==0)
            {
                if(i==n-3)
                    {
                        k=0;
                        break;
                    }
                continue;
            }
            else if(arr[i]%2!=0  && arr[i+1]%2!=0)
            {

                res++;
                 if(i==n-3)
                    {
                        k=1;
                        break;
                    }
            }
            else
            {
                res = res + 2;
                   if(i==n-3)
                    {
                        break;
                    }
            }
         }

            if( arr[n-1]%2 ==0  && k == 0)
                {
                            res = res;

                }  

            else if(arr[n-1]%2 !=0  && k == 1)
            {
                        res++;
            }

            else if(arr[n-1]%2 !=0  && arr[n-2]%2 == 0)
            {
                res= res+2;
            }

               else if(arr[n-1]%2 ==0  && arr[n-2]%2 != 0)
            {
                res= res+2;
            }
      
        cout<< res << endl;
        }
    

    }
    return 0;
}



