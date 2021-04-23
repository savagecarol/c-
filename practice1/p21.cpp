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
 
 ll a , b , c;
 ll dp[40000];
 ll cut(ll n)
 {

      if(n == 0) return 0;
   if(n < 0) return INT_MIN;
    if(dp[n]!=-1)
        {
            return dp[n];
        }
   dp[n] =  1 + max( cut(n-a), max( cut(n-b), cut(n-c)));
   return dp[n];

 }
 
void solve()
{
    memset(dp , -1 , sizeof(dp));
    ll n;
    cin >> n >> a>> b >> c;  
    cout << cut(n);  
}
int main()
{
    ll t;
    t = 1;
    while(t--)
    {
	solve();
    }
	return 0;
}