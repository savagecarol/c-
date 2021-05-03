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

/* code */
void solve()
{
	ll n  , k , t;
	cin >> n >> k >> t;
	ll a[n];
	inp(i , n , a);
	if(n<=t)
		{
			cout << n;
		}
	else
		{
			vector<int> v;
			for(int i = 0 ; i < n-1;i++)
				v.push_back(a[i+1]-a[i]-1);

			sort(v.rbegin(),v.rend());
  			int ans = a[n - 1] - a[0] + 1;
  			for (int i = 0; i < t - 1; i++) {
    			ans -= v[i];
  					}
  				cout << ans << '\n';
}
}
int main() 
{	
	int t;
	t = 1;
	while(t--)
	{
	   solve();
	}
	return 0;
}



