#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{   
    ll n;
    cin>>n;
    ll arr[n];
    unordered_map< ll , ll> mp; 
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        mp[i]= arr[i];
    }
     ll res = 0;
    for(ll i=0;i<n;i++)
    {
        ll val = 0;
        ll k = i;
        while(mp.find(k)!=mp.end() && k<n)
        {   
                val+= mp[k];
                k+= mp[k] ; 
        }
        res = max(res,val);
    }
     cout<< res << endl ; 
}
int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
return 0;
}