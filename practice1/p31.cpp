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
void solve()
{
    ll n;
    cin >> n;
    ll x;
    ll maxx1 = INT_MIN;
    ll minn2 = INT_MAX;
    loop(i , n)
    {
        cin >> x;
        maxx1 = max(x , maxx1);
    }
        loop(i , n)
    {
        cin >> x;
        minn2 = min(x , minn2);
    }

    if(minn2>=maxx1)
    cout << (minn2 - maxx1) +1;
    else
    cout << 0;
}
int main()
{
    ll t;
    t=1;
    while(t--)
    {
	solve();
    }
	return 0;
}