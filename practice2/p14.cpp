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

    int n , m , k;
    cin >> n >> m ;

    int a[n+1][m+1];
    int b[m+1][n+1];
    unordered_map<int , int> b;
    for(int i = 1 ; i <=n ;i++)
    {
        for(int j =1 ; j<=m ;j++)
            {
                cin >> a[i][j];
            }
    }

    for(int i = 1; i <=n ;i++)
    {
        for(int j = 1 ;j <=m;j++)
        {
            b[j][i] = b[i][j];
        }
    }
    


    int count = 0;
    for(auto p : b)
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