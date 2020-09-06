#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int n;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        if(n==2)
        {
            cout<<2<<endl;
            continue;
        }

        long long sum=arr[1]-arr[0];

        long long c=1,res=1,k;

        for(int i=1;i<n-1;i++)
        {
            long long k=arr[i+1]-arr[i];
            if(sum==k)
               {
                   c++;
                res=max(c,res);
               }
            else
                {
                    sum=k;
                    c=1;
                }
        }
        cout<<res+1<<endl;

    }
    return 0;
}
