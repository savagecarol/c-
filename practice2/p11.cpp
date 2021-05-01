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


 ll dp[2000][2000];


/* typedef */
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

/* code */
ll mod = 1000000007;
void solve()
{

    ll n;
    cin >> n;
    ll a[n];
    inp(i , n , a);
    ll q;
    cin >> q;
    ll b[q];
    inp(i ,  n , b);
    ll sum = 0;
    loop(i , n)
    {
        sum=sum+a[i];
    }
    sum=(sum*2)%mod;
    for(ll i = 1 ; i <=q;i++)
    {
        cout << (sum)  << endl;
          sum = (sum * 2) %  mod;
    }

}
int main()
{
    solve();
}