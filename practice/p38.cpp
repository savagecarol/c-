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
void solve()
{
    ll n , k;
    cin >> n >> k;
    ll a[n];
    inp(i , n , a);
    ll res = 0;
    ll sum = 0;
    for(int i = 0 ; i < k ;i++)
    {
        sum = sum + a[i];
    }
    
    ll lol = sum;
    for(ll i = 1 ; i <=n-k ;i++)
    {
        ll value = lol - a[i-1] + a[i+k-1];
        if(sum > value)
        {
            sum = value;
            res = i;
        }
        lol=value;
    }
    cout << res+1;
}
 
int main(){
	solve();
	return 0;
}