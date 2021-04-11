/* code by savagecarol */
#include <bits/stdc++.h>
using namespace std;

/* predefined value */
#define yes() cout << "YES" 
#define no() cout << "NO"
#define one() cout << "1"
#define zero() cout << "0"
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

void solve()
{
    ll n;
    cin >> n;
    ll k;
    cin >> k;
    ll a[n];
    inp(i , n , a);
    sort(a, a +n);
    ll first = a[0] - 0;
    ll second = k - a[n-1];
    ll diff = 2*max(first , second);
    for(ll i = 0 ; i< n-1;i++)
    {
        diff = max(diff, a[i+1]-a[i]);
    }
    cout <<fixed <<setprecision(10)<<diff/2.;

}
int main() {
            solve();
            return 0 ;
}