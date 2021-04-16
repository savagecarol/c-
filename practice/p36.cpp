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

#define mod 1000000007
 ll dp[2000][2000];


/* typedef */
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

/* code */

ll binary(ll a[] , ll n , ll ele)
{

			if(ele< a[0]){
                    return 0;
				}
			if(ele >= a[n-1]){
				return n;
				}

				ll l = 0, r = n-1 ; ll i,ans;
			while (l <= r) { 
                        i = l + (r - l) / 2; 
                        if (a[i] > ele)
                             { 
                                  ans = i; 
                                r = i - 1; 
                             } 
                        else
                                l = i + 1; 
                        }
                    return ans;
                }


void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    inp(i , n , a);
    sort(a , a+n);
    ll q;
    cin >> q;
    ll x;
    for(ll j = 0 ; j < q ; j++)
    {
        cin >> x;
        ll count = 0;
             cout << binary(a , n , x) << endl;
    }

}
 
int main(){
	solve();
	return 0;
}