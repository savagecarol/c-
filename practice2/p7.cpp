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
bool sortbysec(const pair<ll ,ll> &a,
              const pair<ll , ll> &b)
{
    if (a.second < b.second)
        return true;
    return false;
} 

void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    ll b[n];
    inp(i , n , a);
    inp(i , n , b);
    unordered_map<ll , ll> d;
    vector<pair<int , int>> c;
    for(int i = 0 ; i < n;i++)
    {
        d[a[i]] = d[a[i]]+b[i];
        c.push_back({a[i] , b[i]});
    }
    sort(c.begin() , c.end() , sortbysec);
    ll sum = 0;
    for(int i = 0 ; i < n;i++)
    {
        cout << c[i].first << "  " << c[i].second << endl;
        sum = sum + a[i];
    }
    cout << sum << " ";
    ll k = 2;
    for(int i = 0 ; i < n ;i++)
    {
        
    }

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