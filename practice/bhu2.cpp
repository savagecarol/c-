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
    ll n;
    cin >> n;
     ll a[n];
    ll b[n];

    for(int i = 0 ; i < n ;i++)
    {
        cin >> a[i];
    }

        for(int i = 0 ; i < n ;i++)
        {
            cin >> b[i];
        }

        sort(a , a+n , greater<ll>());
        sort(b , b +n);

        ll maxx = 0;
        for(ll i = 0 ; i < n ;i++)
        {
            maxx = max(maxx ,(a[i] + b[i]));
        }
    cout << maxx;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
        {
        solve();
        cout << endl;
        }
    return 0 ;
}