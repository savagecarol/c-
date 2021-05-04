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
#define inp(i,n,arr) for(ll i=0 ; i<n ; i++) cin >> arr[i]
#define out(i,n,arr) for(ll i=0 ; i<n ; i++) cout << arr[i] << " "
#define loop(i,n) for(ll i=0;i<n;i++)
#define arrs(i,n,arr,sum) for(ll i = 0 ; i < n ; i++) sum = sum + arr[i];
#define arrmax(i , n , arr , maxx) for(ll i = 1 ; i < n;i++) maxx = max(maxx , arr[i]);
#define arrmin(i , n , arr , minn) for(ll i = 0 ; i < n;i++) minn = min(minn , arr[i]); 
 
 
/* typedef */
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
 
/* code */
 
void solve()
{
    int n , c;
    cin >> n >> c;
    int mat[n];
    for (int i = 0; i < n; i++) {
        cin >> mat[i];
    }
    int ans = 0;
    for (int i = 0; i < n - 1; i++) {
        ans = max(ans, mat[i] - mat[i + 1] - c);
    }
    cout << ans ;

}
int main() 
{	
	int t;
	t=1;
	while(t--)
	{
	   solve();
       cout << endl;
	}
	return 0;
}