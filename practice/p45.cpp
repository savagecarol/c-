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

#define mod 1000000007
 ll dp[2000][2000];


/* typedef */
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

/* code */ 
ll n, k;
bool check(ll x)
{   
    ll lies = x - x / n;
    return (k >=lies);
} 

 
void solve()
{
    cin >> n >> k;
  if(n > k)
  {
    cout << k << endl;
    return;
  }
  
  ll lo = 0, hi = 1e18;
  while (lo < hi)
  {
    ll mid = (lo + hi + 1) / 2;
    if(check(mid))
    {
      lo = mid;
    }
    else hi = mid-1;
  }
  
  if(lo % n == 0) lo--;
 
  cout << lo << endl; 
}

int main()
{
	solve();
	return 0;
}