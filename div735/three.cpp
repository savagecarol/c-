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

      ll n ,  m;
      cin >> n >> m;
      ll a[n]; ll b[m];
      for(int i = 0 ;i < n ; i++) cin >> a[i];
      for(int i = 0 ;i < m ; i++) cin >> b[i];
      sort(a , a+n);
      sort(b , b+m);
      ll i = 0 , j = 0;
      ll ans = INT_MAX;
      while(i < n && j < m)
      {
            ll diff = abs(a[i]-b[j]);
            ans = min(ans , diff);
            if(a[i] < b[j])i++;
            else j++;
      }
     cout << ans;
}
