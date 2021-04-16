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
    ll n;
    cin >> n;
    ll a[n];
    ll b[n-1];
    for(ll i = 0 ; i < n;i++)
    {
        cin >> a[i];
    }
       for(ll i = 0 ; i < n-1;i++)
    {
        cin >> b[i];
    }
        unordered_map<ll , ll> c;
            ll x;
    
    for(ll i = 0 ; i < n-2;i++)
    {
        cin >> x;
        c[x]++;
    }
    unordered_map<ll , ll> d;
    for(ll i = 0 ; i < n-1 ; i++)
    {
        c[b[i]]--;
        d[b[i]]++;
    }
    for(ll i = 0 ; i < n ; i++)
    {
        d[a[i]]--;
    }

    for(auto q : d)
    {
        if(q.second <0)
            {
                cout << q.first << endl;
                break;
            }
    }
        for(auto q : c)
    {
        if(q.second < 0)
            {
                cout << q.first;
                break;
            }
    }


}

int main(){
    ll t;
    t=1;
    while(t--)
    {
	solve();

    }
	return 0;
}