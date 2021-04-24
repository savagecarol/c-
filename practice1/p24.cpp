/* code by savagecarol */
#include <bits/stdc++.h>
using namespace std;
 
/* predefined value */
#define yes() cout << "YES" 
#define no() cout << "NO"
#define one() cout << "1"
#define zero() cout << "0"
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
 
 
/* typedef */
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
 
/* code */ 
ll multi(ll r)
{
    ll k = 10;
    for(int i = 0 ; i < r;i++)
    {
        k=k*10;
    }
    return k;
}
ll cut(ll n)
{
    if(n==0)
    {
        return 0;
    }
    if(n<2050)
    {
        return -1;
    }
    ll ans = INT_MAX;
    ll res = INT_MAX;
    for(int i = 0 ; i <17 ;i++)
    {
        ans = 1 + cut(n-((205)* multi(i)));
        res = min(ans , res);
    }
    return res;
}

void solve()
{
    ll n;
    cin >> n;
    ll p = cut(n);
    cout << p+1;
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