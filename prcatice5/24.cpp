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

void solve() 
{ 
    
    ll n;
    cin >> n;
    ll a[n];
    inp(i , n , a);
    unordered_set<ll> p;
    vector<ll> r;
    for(ll i = n-1 ; i >=0 ;i--)
    {
        if(p.find(a[i])==p.end())
            r.push_back(a[i]);
        p.insert(a[i]);
    }
    cout << r.size() << endl; 
    for(ll i = r.size()-1 ; i >=0 ;i--) cout << r[i] << " " ;
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
