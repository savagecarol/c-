#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mp make_pair
#define fi first
#define se second
#define pb push_back

typedef pair<int, int> pii;
typedef pair<ll, ll> pll;


void yes()
{
    cout << "YES" << endl; 
}

void no()
{
    cout << "NO" << endl; 
}


void solve()
{   
    ll n , k;
    cin >> n >> k ;

    ll arr[n];
    ll count = 0 ;
    for(int i=0;i<n;i++)
        {
             cin >> arr[i];
             if(arr[i] <= k)
             {
                 count++;
             }

        }
 
        if(count == n)
        {
            yes();
            return;
        }

    sort(arr , arr+n);

    if(arr[0] + arr[1] <=k)
        yes();
    else
        no();
    
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
        {
            solve();       
        }
return 0;
}

