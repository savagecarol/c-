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
/* code */
void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    inp(i , n , a);
    ll b[n];
    for(int i = 0 ; i < n ;i++)
    {
        b[i] = a[i];
    }

    ll minn = 0 ;
    ll value = INT_MAX;
    for(int i = 0 ; i < n ;i++)
    {
        if(a[i] < value)
        {
            minn = i;
            value = a[i];
        }
    }

    int p[n];
    int k = -1;
    for(int i = 0 ; i < n ;i++)
    {
        if(a[i] % value !=0)
        {
            if(k<=a[i])
                {
                k=a[i];
                }
            else
                {
                    no();
                    return;
                }
        }
    }

    sort(b , b + n);
    k=0;
    for(int i = 0; i < n; i++)
	    if(a[i] != b[i] && a[i] % value > 0)
	        	k = 1;

	if(k)
	    no();
	else
	    yes();

}

int main() 
{	
	ll t;
    cin >> t;
	while(t--)
	{
	   solve();
       cout << endl;
	}
	return 0;
}