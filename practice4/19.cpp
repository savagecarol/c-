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

/* power function */
long long binpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}
int gcd (int a, int b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}
int countSetBits(int n){
    unsigned int count = 0;
    while (n) {
        n &= (n - 1);
        count++;
        }
    return count;
}

/*code*/



void solve() 
{

    int n; cin >> n;
    vector <ll> A(n);
    vector <int> cnts(103, 0);
    vector <bool> w(103, false);
    for (ll &i: A) { 
        cin >> i; 
        cnts[i]++;
    }
    for (int i = 0; i < n; ++i) {
        for (int j = i+1; j < n; ++j) {
            w[A[i] + A[j]] = true;
        }
    }
 
    ll ans = 0;
    for (int i = 1; i <= 100; ++i) {
        if (!w[i]) continue;
        ll res = 0;
        for (int j = 1; j <= i / 2; ++j) {
            if (j*2 == i) {
                res += cnts[j] / 2;
            }
            else {
                res += min(cnts[j], cnts[i - j]);
            }
        }
        ans = max(ans, res);
    }
 
    cout << ans << endl;

}
int main() 
{	

	ll t;
    cin >> t;
	while(t--)
	{
	   solve();

	}
	return 0;
}
