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
    ll n ;
    cin >> n;
    ll q;
    cin >> q;
    ll a[n];
    inp(i , n , a);
    ll x , y;


    ll dp[n*(n+1)/2];
    
    ll k = 0;
    for(ll i = 0 ; i < n ;i++)
    {
        dp[k] = a[i];
        k++;
        ll d = a[i];
        for(ll j = i+1 ; j < n ;j++)
        {
            d=d & a[j];
            dp[k] = d;
            k++;
        }
    }

    ll d = 0;
    for(ll i = 0 ; i < n*(n+1)/2 ;i++)
    {
         d =d | dp[i];
    }

    cout << d << endl;

    loop(i , q)
    {

    cin >> x >> y;
    a[x-1] = y;
    ll k = 0;
    for(ll i = 0 ; i < n ;i++)
    {
        dp[k] = a[i];
        k++;
        ll d = a[i];
        for(ll j = i+1 ; j < n ;j++)
        {
            d=d & a[j];
            dp[k] = d;
            k++;
        }
    }

    ll d = 0;
    for(ll i = 0 ; i < n*(n+1)/2 ;i++)
    {
         d =d | dp[i];
    }
    cout << d << endl;
    
    }
}




int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
	solve();
    }
	return 0;
}