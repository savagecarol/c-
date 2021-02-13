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
    ll x , y;
    cin>> x >> y;
    ll k = 0;
    ll z = min(x,y);
    if(z>=3)
    ll k =  z - 3;
    for(ll i=3 ; i <=z; i++)  
    {
                ll p = min( z , i-2);
                k = k  + p ;  
    }

    cout << k << endl;
}

int main() 
{
    ll t;
    cin >> t;
    while(t--)
        solve();

	return 0;
}

