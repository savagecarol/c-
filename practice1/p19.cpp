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
 ll dp[2000][2000];


/* typedef */
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

/* code */ 
void solve()
{
    ll n ;
    cin >> n;
    ll a[n];
    inp(i , n , a);
    ll sum = a[0];
    for(ll i = 1 ; i < n;i++)
    {
        sum = sum ^ a[i];
    }
    if(sum == 0)
    {
        yes();
        return;
    }

    ll y = 0;
    ll count = 0;
    for(int i = 0 ; i < n;i++)
    {
        y = y^a[i];
        if(y==sum)
        {
            count++;
            y=0;
        }
    }
    if(count>1)yes();
    else no();
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