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
    ll a[n][n];
    for(ll i = 0 ; i <n ;i++)
    {
        for(ll j = 0 ; j <n ;j++)
        {
            cin >> a[i][j];
        }
    }


    vector<ll>r;
    for(ll i = 0 ; i < k ;i++)
    {
    for(ll j = 0 ; j < k ; j++)
        {
            r.push_back();
        }
    }
}




ll ans = INT_MAX;
for(ll i = 0 ; i < s.size() ;i++)
{
    sort(s[i].begin(),s[i].end());
    if(k*k%2==0)
    ans = min(ans ,  s[i][floor((k*k)/2)-1]);
    else
    ans = min(ans , s[i][floor((k*k)/2)]);
}
cout << ans;

}
int main() 
{
    solve();
	return 0;
}
