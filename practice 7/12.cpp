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
#define inp(i,n,arr) for(ll i=0 ; i<n ; i++) cin >> arr[i]
#define out(i,n,arr) for(ll i=0 ; i<n ; i++) cout << arr[i] << " "
#define loop(i,n) for(ll i=0;i<n;i++)
#define arrs(i,n,arr,sum) for(ll i = 0 ; i < n ; i++) sum = sum + arr[i];
#define arrmax(i , n , arr , maxx) for(ll i = 1 ; i < n;i++) maxx = max(maxx , arr[i]);
#define arrmin(i , n , arr , minn) for(ll i = 0 ; i < n;i++) minn = min(minn , arr[i]); 
 
 
/* typedef */
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

/*code*/
int main() 
{
    ll var = 1e5;
    ll t;
    t=1;
    while(t--)
    {
        ll n;
        cin >> n;
        unordered_map<ll , ll> m;
        ll a[n];
        for(ll i = 0 ;i < n ;i++)
        {
            cin >> a[i];
            m[a[i]]++;
        }

        ll count = 0;
        for(ll i = 0 ; i < n-1;i++)
        {
            m[a[i]]--;
            count+= (n-(i+1)) - m[a[i]];
        }
        cout << count;
 }
}
