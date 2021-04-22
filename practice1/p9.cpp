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

    ll n;
    cin >> n;
    ll a[n-1];
    for(ll i = 0;i < n-1 ;i++)
    {
        a[i] = i+1;
    }

    ll dp[n-1];
    dp[0] = 1;
    for(ll i= 1 ; i < n-1;i++)
    {
        dp[i] = dp[i-1] * a[i];
    }

    ll j = -1;
    for(int i = 0 ; i < n-17;i++)
    {
        if(dp[i]%n == 1)
            {
              j = i;  
            }
    }
}
int main()
{
    ll t;
    t = 1;
    while(t--)
    {
	solve();
    cout << endl;
    }
	return 0;
}