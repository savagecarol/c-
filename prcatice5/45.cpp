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
#define mod 1e9
/* loops */
#define inp(i,n,arr) for(ll i=0 ; i<n ; i++) cin >> arr[i]
#define out(i,n,arr) for(ll i=0 ; i<n ; i++) cout << arr[i]
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
bool comp(string a , string b)
{
    if(b.size() > a.size())return true;
    return false;
}

    set<ll> m;
void solve() 
{
    ll n;
    cin >> n;
      if(n==1 || n==0){
          cout << 0;return;
      }
        ll count = 1;
        while(*m.lower_bound(n)!=n)
         {
            n=n-*prev(m.lower_bound(n), 1);
            if(n==1 || n==0) break;
            count++;
         }
         cout << count;
    }
int main() 
{
    m.insert(0);
    m.insert(2);
    m.insert(7);
    ll n = 3;
    ll maxx = 7;
    while(maxx<=mod)
    {
        maxx = (n*2)+(n-1) + maxx;
        m.insert(maxx);
        n++;
    }
	ll t;
    cin >>t;
	while(t--)
	{
	   solve();
       cout << endl;
	}
	return 0;
}
