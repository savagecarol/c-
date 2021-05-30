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
    ll n , m;
    cin >> n >> m;
    string s;
    cin >> s;
    s="00" + s + "00";
 
 if(m>1000) m=1000;

    for(ll j = 0 ; j < m ;j++)
    {   
        vector<ll> r;
        for(ll i = 2 ; i <=n+1 ;i++)
        {
            if(s[i] == '1')
                {
                    if(s[i-2]!='1') r.push_back(i-1);
                    if(s[i+2]!='1') r.push_back(i+1);
                }
        }
        for(ll i = 0 ; i<r.size();i++)
        {
            s[r[i]] = '1';
        }
    }
    for(ll i=2;i<=n+1;i++)cout << s[i];
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