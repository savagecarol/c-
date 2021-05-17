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
    ll n , m;
    cin >> n >> m;
    string s;
    cin >> s;
    char x;
    unordered_set<char> p;
    for(int i = 0 ; i < m;i++)
    {
        cin >> x;
        p.insert(x);
    }

    ll a[n];
    for(int i = 0 ; i < n;i++)
    {
        if(p.find(s[i]) != p.end())
        {
            a[i] = 1;
        }
        else
        {
            a[i] = 0;
        }
    }

    ll count = 0 , res = 0;
    for(int i = 0 ; i < n;)
    {
        if(a[i] == 0)
            {i++;}
        else
        {
            ll ans = 1;
            count=1;
            i=i+1;
            while(i < n && a[i] ==1)
            {
                i++;
                count++;
                ans = ans + count;
            }
            res = res + ans;
        }   
    }
    cout << res;

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
