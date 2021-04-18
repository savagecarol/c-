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
void solve()
{

    ll n;
    cin >> n;
    int len = to_string(n).length();
    vector<double> a;
    ll i = 0;
    while(i<len)
        {
            ll x = n%10;
            if(x != 0)
            {
                a.push_back(x * pow(10 , i));

            }
            n=n/10;
            i++;
        }
       cout << a.size()<<endl;
       for(ll i = 0 ; i < a.size();i++)
       {
           cout << a[i] << " ";
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