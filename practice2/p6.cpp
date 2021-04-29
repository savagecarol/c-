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
    if(n <3)
    {
        cout << -1;
        return;
    }
    if(n==4)
    {
            cout << -1;
            return;
    }
    for(int i = 0 ; i<=1000;i++)
    {
        for(int j = 0;j<=1000;j++)
        {
            for(int k = 0 ; k <=1000;k++)
                {
                    if( (i * 3 + j * 5 + 7 * k) == n)
                    {
                        cout << i << " " << j << " " << k;
                        return;
                    }
                    else if((i * 3 + j * 5 + 7 * k) > n)
                        {
                        break;
                        }   
                }
        }
    }
    cout << -1;
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