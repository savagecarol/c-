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
void solve(){

    ll n;
    cin >> n;
    ll a[n];
    inp(i , n , a);
    ll m;
    cin >> m;
    ll b[m];
    inp(i , m , b);
    sort(a, a + n);
    sort(b ,b + m);
    ll res = 0;
    ll i = 0;
    ll j = 0;
    while(i < n && j < m)
    {
        if(abs(a[i] - b[j])<=1)
            {
                i++;
                j++;
                res++;
            }
        else if(a[i] < b[j])
        {
               i++; 
        }
        else
        {
            j++;
        }
    }
    cout << res;
}

int main(){
	solve();
	return 0;
}