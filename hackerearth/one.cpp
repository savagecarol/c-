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
        ll k;
        cin>>n;
        cin>>k;
        ll arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];

        
        set<ll> val;
        ll sum = 0;
        ll i = 0; ll j = 1;

        while(i<n)
        {
             if(val.find(arr[i]) == val.end() && k>=j)
            {
                sum = sum + arr[i];
                val.insert(arr[i]);
                k++;
            }
            else if(val.find(arr[i]) != val.end())
            {
                i++;
                continue;  
            }
            else if(arr[i] > *val.begin())
            {
                val.erase(val.begin());
                val.insert(arr[i]);
            }

            i++;
        }
        cout<< sum << endl;
    }
    return 0;
}

