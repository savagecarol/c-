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
        ll count = 1;
    ll a[n];
    inp(i , n , a);
    ll res = 1;
    for(int i = 1; i < n ;i++)
    {
        if(a[i] >= a[i-1])
        {
            count++;
            res = max(res , count);
        }
        else
        {
            count = 1;
        }
    }
    cout << res;        
    }
int main()
    {
     
                solve();

    }