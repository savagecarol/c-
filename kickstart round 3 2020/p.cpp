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
    ll a[100000000];
    ll b[100000000];
    ll c[100000000];

/* code */

void solve()
{
    cin >> n;
    for(ll i = 0 ; i <n ; i++)
    {
        cin >> a[i];
        cin >> b[i];
    }
    for(ll i = 0 ; i < n; i++)
    {
        cin >> c[i];
    }
    ll i = 0;
    ll late = 0;
    while(i < n-1)
    {
        ll arival = a[i]+ c[i];
        ll delay = b[i];
        if((delay - arival) / 2 > c[i])
        {


        }
        i++;
    }
    cout << a[i] + late + c[i]; 
}

int main() {
	ll t;
    cin>>t;
    while(t--)
	{ 
	   solve();
       cout << endl;
    }
    return 0 ;
}