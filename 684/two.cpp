#include<bits/stdc++.h>
#define ll long long int
using namespace std;



void lol2(ll b , ll c, ll arr[],ll n)
{
    ll count = 0;
    for(ll i=b-1;i<n;i++)
    {
        int x = arr[i];

        if(c>=x)
        {
            c = c - x;
            count++;
        }

    }


    cout<<count<<endl;
}


void solve()
{
    ll n,q ;
    cin>>n;
    cin>>q;
    ll arr[n];

    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
    }

     ll g[q][3];
    for(int i=0;i<q;i++)
    {
        cin>>g[i][0];
         cin>>g[i][1];
        cin>>g[i][2];
    }


    for(ll i=0;i<q;i++)
    {
        ll a = g[i][0];
        ll b = g[i][1];
        ll c = g[i][2];


        if(a==1)
            {
                 for(ll i=0;i<b;i++)
                    {
                    arr[i] = max(arr[i],c);
                    }
            }

        else
            lol2(b,c,arr,n);
    }
}
int main()
{
    solve();
    return 0;
}

