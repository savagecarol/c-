#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        ll m;
        cin>>n;
        cin>>k;
        ll arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        sort(arr , arr+n);

        unordered_set<ll> val;
        ll sum = 0;
        for(int i=n-1;i>(n-k)-1;i--)
        {
            if(val.find(arr[i]) == val.end() )
            {
                sum = sum + arr[i];
                val.insert(arr[i]);
            }
        }
        cout<< sum << endl;
    }
    return 0;
}

