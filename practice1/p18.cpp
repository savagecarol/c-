/* code by savagecarol */
#include <bits/stdc++.h>
using namespace std;

/* predefined value */
#define yes() cout << "YES" 
#define no() cout << "NO"
#define one() cout << "1"
#define two() cout << "0"
#define ll long long int
#define intt long long
#define mp make_pair
#define fi first
#define se second
#define pb push_back

/* loops */
#define inp(i,n,arr) for(int i=0 ; i<n ; i++) cin >> arr[i]
#define out(i,n,arr) for(int i=0 ; i<n ; i++) cout << arr[i] << " "
#define loop(i,n) for(int i=0;i<n;i++)

#define mod 1000000007
 ll dp[2000][2000];


/* typedef */
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

/* code */ 
void solve()
{
    ll n , k;
    cin >> n >> k;
    ll a[n];
    for(ll i = 0 ; i < n;i++)
    {
        cin >> a[i];
    }

    ll i = 0 ;
    ll j = n-1;
    while(i < j && k > 0)
    {
        ll r = min(a[i] , k);
        a[i] = a[i] - r;
        a[j] = a[j] + r;
        i++;
        j--;
        k = k-r;
    }
    out(i , n , a);
}
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
	solve();
    cout << endl;
    }
	return 0;
}