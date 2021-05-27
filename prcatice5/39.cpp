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
bool comp(string a , string b)
{
    if(b.size() > a.size())return true;
    return false;
}

void solve() 
{
    ll n;
    cin >> n;

    vector<string> p;
    string x;
    for(ll i = 0 ; i < n;i++)
    {
        cin >> x;
        p.push_back(x);
    }
    sort(p.begin() , p.end() , comp);
    for(ll i = 0 ; i < n-1 ;i++)
    {
            bool var = false;
            ll r =p[i].size();
            for(ll j = 0 ;j<=p[i+1].size()-r ;j++)
            {
                if(p[i] == p[i+1].substr(j , r)) 
                    var = true;
            }
            if(var == false)
                {
                    no();
                    cout << endl;
                    return;
                }
        }
    cout <<"YES" << endl;
    for(ll i = 0 ; i < n;i++)
    {
        cout << p[i] << endl;
    }
}
int main() 
{
	ll t;
    t=1;
	while(t--)
	{
	   solve();
	}
	return 0;
}
