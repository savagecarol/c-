#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll n;
    ll k;
    cin>>n;
    cin>>k;

    ll arr[n];
    ll t=0;
    ll i=0;
    for(i=0;i<n;i++)
        cin>>arr[i];


    for(i=0;i<n;i++)
    {
        if(arr[i]>=k)
         {
             t++;
            arr[i+1]+=(arr[i]-k);
         }
         if(arr[i]<k)
            break;
    }


    if(i==n)
        t+=((arr[n-1]-k)/k);
    cout<<t+1<<endl;

}


int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
        cout<<endl;
    }
    return 0;

}

