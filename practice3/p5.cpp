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
#define mod 1000000007 
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
/* code */
void solve()
{
    ll a , b, n;
    cin >> a >> b >> n ;
    ll v[n+1];
    v[0] = a;
    v[1] = b;
    v[2] = b-a;
    if(n==1)
    {
        if(a<0)
        cout<<a+mod;
        else
        cout << a % mod; 
    } 
    else if(n == 2)
    {
         if(b<0)
        cout<<b+mod;
        else
        cout << b % mod;
    }
    else
    {
        for(int i = 3 ; i <=n;i++)
            {
                v[i] = (v[i-1] - v[i-2]);
            }
            cout << v[n-1];
    }


}

int main() 
{	
	ll t;
    t = 1;
	while(t--)
	{
	   solve();
       cout << endl;
	}
	return 0;
}