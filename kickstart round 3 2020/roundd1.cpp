/* code by savagecarol */
#include <bits/stdc++.h>
using namespace std;

/* predefined value */
#define yes() cout << "YES" 
#define no() cout << "NO"
#define one() cout << "1"
#define two() cout << "0"
#define ll long long int
#define mp make_pair
#define fi first
#define se second
#define pb push_back

/* loops */
#define inp(i,n,arr) for(int i=0 ; i<n ; i++) cin >> arr[i]
#define out(i,n,arr) for(int i=0 ; i<n ; i++) cout << arr[i] << " "
#define loop(i,n) for(int i=0;i<n;i++)

/* typedef */
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

    ll n  , k ;
    ll a[1000000];

/* code */
ll solve()
{

    cin >> n ;
    cin >> a[0];
    ll p = 0;
    for(ll i = 1 ; i <n; i++)
    {
        cin >> a[i];
        if(a[i-1] < a[i])
        {
            p++;
        }
    }
    if(p==n-1)
        return 1;

    ll count = 0 ;
    ll peak = a[0];

    for(ll i = 1 ; i < n; i++)
    {   
        if(a[i] > peak)
        {
            peak = a[i];
        }
        else
        {
            count++;
        }
    }    





}

int main() {
	ll t;
    cin>>t;
    ll i = 1;
    while(t--)
	{ 
	   ll p = solve();
       cout <<"Case #"<<i<<": "<< p << endl;
       i++;
    }
    return 0 ;
}