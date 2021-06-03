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

ll mod = 1e9 + 7;
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

int countSetBits(int n){
    unsigned int count = 0;
    while (n) {
        n &= (n - 1);
        count++;
        }
    return count;
}
int powerOfTwo(int n){
        return n && (!(n & (n-1)));
    }
/*code*/
 void solve() 
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    inp(i , n , a);
    sort(a.rbegin(),a.rend());
    vector<ll> o;
    vector<ll> e;
    ll even = 0;
    ll odd = 0;
    for(ll i = 0 ; i < n;i++)
    {
        if(a[i]%2==0)
        {even++;e.push_back(a[i]);}
        else{odd++;o.push_back(a[i]);}
    }
        ll sum = 0;
        if(even>odd)
        {
            for(ll i = odd+1 ; i < even ;i++)sum=sum+e[i];
        }
        else if(odd>even)
        {
            for(ll i = even+1 ; i < odd ;i++)sum=sum+o[i];
        }
        cout << sum;
    }
int main() 
{
	solve();
	return 0;
}

