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
    ll n , k;
    cin >> n >> k;
    vector<ll> a(n);
    inp(i , n , a);
    vector<ll> b(n);
    for(ll i = 0 ; i < n;i++)b[i] = a[i];
    sort(b.rbegin() , b.rend());
    ll sum = 0;
    unordered_map<ll, ll> p;
    for(ll i = 0 ; i <k;i++)
    {
        p[b[i]]++;
        sum = sum + b[i];
    }
    cout << sum << endl;
    
    ll count = 0;
    ll last =0;
    ll start = 0;
    for(ll i = 0 ; i < n ; i++)
    {
        last++;
        if(p.find(a[i])!=p.end() && p[a[i]]>0)
        {
            if(p.size()==1 && p[a[i]]==1) {
                 break;
                }
            cout << last - start << " ";
            start = last;
            p[a[i]]--;
            if(p[a[i]]==0)
                p.erase(a[i]);
        }
    }
        cout << n-start;
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
