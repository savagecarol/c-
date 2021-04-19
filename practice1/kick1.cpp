/* code by savagecarol */
#include <bits/stdc++.h>
using namespace std;

/* predefined value */
#define yes() cout << "YES" 
#define no() cout << "NO"
#define one() cout << "1"
#define two() cout << "0"
#define ll long long int
#define intt long long
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
void solve(ll t)
{
    ll n;
    cin >> n;
    string s;
    cin >> s;

    ll dp[n];
    dp[0] =1;

    for(ll i = 1 ; i < n;i++)
    {
        if(s[i] > s[i-1])
        {
            dp[i] = dp[i-1] + 1;
        }
        else
        {
            dp[i] =1;
        }
    }
   
    cout << "Case #"<<t<<": " ;
    for(int i = 0 ; i < n;i++)
    {
        cout << dp[i] << " ";
    }

}
int main()
{
    ll t;
    cin >> t;
    for(ll i =1 ; i <=t;i++)
    {
	    solve(i);
        cout << endl;
    }
	return 0;
}