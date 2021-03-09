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

/* typedef */
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;


const int N = 55;
const int K = 35;

    ll n;
    ll k ;
    ll p;

    ll a[N][K];
    ll cache[N][N * K];

/* code */

ll dp(int idx , int taken)
{

}


ll solve()
{

    cin >> n; 
    cin >> k;
    cin >> p;

    for(ll i = 1 ; i <=n; i++)
        for(ll j = 1 ; j <=k ; j++)
            cin >> a[i][j];

    return dp(1,p);    
}

int main() 
{
	
	int t;
	cin>> t;
    int i = 1;
	while(t--)
	{
        memset(cache , -1 , sizeof(cache));
        ll p = solve();
       cout << "Case #"<<i<<": " << p;
       cout<<endl;
       i++;
	}

	return 0;
}