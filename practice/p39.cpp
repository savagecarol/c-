/* code by savagecarol */
#include <bits/stdc++.h>
using namespace std;

/* predefined value */
#define yes() cout << "YES" 
#define no() cout << "NO"
#define one() cout << "1"
#define two() cout << "0"
#define ll long long int
#define mp make_pair
#define fi first
#define se second
#define pb push_back

/* loops */
#define inp(i,n,arr) for(int i=0 ; i<n ; i++) cin >> arr[i]
#define out(i,n,arr) for(int i=0 ; i<n ; i++) cout << arr[i] << " "
#define loop(i,n) for(int i=0;i<n;i++)

#define mod 1000000007
 ll dp[2000][2000];


/* typedef */
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

/* code */
void solve()
{
    string s;
    cin >> s;
    ll n=s.length();
    ll dp[n];
    dp[0] = 0;
    for(ll i = 1 ; i <n;i++)
    {
        if(s[i] == s[i-1])
        {
            dp[i]=dp[i-1]+1;
        }
        else
        {
            dp[i]=dp[i-1];
        }
    }
  
    ll m;
    cin >> m;
    ll x , y;
    loop(i , m)
    {
        cin >> x >> y;
        ll count = 0;
        cout << dp[y-1] - dp[x-1] << endl; 
    }
    
}
 
int main(){
	solve();
	return 0;
}