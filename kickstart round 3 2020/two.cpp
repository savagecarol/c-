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
    ll a[31][31];

/* code */
ll solve()
{
    cin >> n >> k;

    for(ll i = 0 ; i < n; i++)
    {
        for(ll j = 0 ; j < k ;j++)
            {
                cin >> a[i][j];
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