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
    ll n ;
    cin >> n;
    ll a[n];
    ll x;
    set<ll , greater<ll>> p;
    for(ll i = 0 ; i < n; i++)
    {
        cin >> x;
        a[i] = x;
        p.insert(x);     
    }
    ll i = n-1;
    ll j = 0;
    ll l = n;
    while(i>=0)
    {
        if(a[i] == *p.begin())
        {
            for(ll k = i ; k < l ; k ++)
            {
                cout << a[k] << " ";
                p.erase(a[k]);
            }
            l = i;
        }
        i--;
    }
}
    

int main() {
    ll t;
    cin >> t;
    for(ll i =1 ; i <=t; i++)
         {
            solve();
            cout << endl;
        }
    return 0 ;
}