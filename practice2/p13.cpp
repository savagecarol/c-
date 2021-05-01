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

ll mod = 1000000007;
 ll dp[2000][2000];


/* typedef */
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

/* code */

void solve()
{
    int n , k , a;
    cin >> n >> k >> a;
    int l[k];
    for(int i = 0 ; i < k;i++) cin >> l[i];
    vector<int> adj[n];
    int x , y;
    int b[n+1][n+1] ;    
    for(int i = 1 ; i <=n;i++)
    {
        for(int j = 1; j<= n;j++)
            {
                b[i][j]=-1;
            }
    }

    for (int i = 1 ; i <=n-1; i++)
    {
        cin >> x >> y;
        adj[x].push_back(y);
        b[x][y]=1;
        b[y][x]=1;
        b[i][i]=0; 
    }
    b[n][n] =0;

    for(int i = 1 ; i <= n ;i++)
    {
        for(int j = 1 ; j <=n ;j++ )
            {
                if(b[i][j]==-1)
                {
                    
                }
            }
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