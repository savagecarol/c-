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
        ll n  , k ;
        vector<ll> a; 
        cin >> n >> k ;
        ll x;
        for(ll i = 0 ; i < n; i++)
            {
                cin >> x;
                a.push_back(x);
            }
        ll j = 0;
        while(j < k)
            {
                ll k = max_element(a.begin() , a.end());
                        ll p = ceil( (a[j] + [N-j-1])/2);
                        a.push_back(p);
            }   
        }
    

int main() {
    ll t;
    cin >> t;
    for(ll i =1 ; i <=t; i++)
         {
            solve();
        }
    return 0 ;
}