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

 int powerOfTwo(int n)
    {
        return n && (!(n & (n-1)));
    }
/*code*/
bool comp(pair<int , int> a , pair <int , int> b )
{
    return (a.first - a.second > b.first - b.second);
}
void solve() 
{
    ll n , m ;
    cin >> n >> m ;
    ll x , y;
    ll sum1 = 0  , sum2 = 0;
    vector<pair<ll , ll>> r;
    for(ll i = 0 ; i < n ;i++)
    {
        cin >> x >> y;
        r.push_back({x, y});
        sum1 = sum1 + x;
        sum2 = sum2 + y;
    }
    if(sum1<=m){cout << 0 ; return;}
    if(sum2>m) {cout << -1;return;}
    sort(r.begin()  , r.end() , comp);
    cout << endl;
    ll count = 0;
    for(ll i = 0 ; i < n ;i++)
    {
        sum1 = sum1 - r[i].first;
        sum1 = sum1 + r[i].second;
        count++;
        if(sum1<=m) break;
    }
    cout << count;
}
int main() 
{

	ll t;
    t=1;
	while(t--)
	{
	   solve();
       cout << endl;
	}
	return 0;
}
