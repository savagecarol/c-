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
    int a[n];
    inp(i , n , a);
    
    int res = 0;
    int count = 0;

    for(ll i = 0 ; i < n; i++)
        {
            for(ll j = i ; j < n ;j++ )
            {
                count = 0;

                for(int k = 0 ; k < n ;k++)
                {
                    if(k>=i && k<=j)
                    {

                          if(a[k] == 0)
                            {
                                count++;
                            }
                    }
                    else
                    {
                        if(a[k] == 1)
                            {
                                count++;
                            }
                    }
                }
                res = max(res , count);
            }
        }
        cout << res;
}

int main(){
	solve();
	return 0;
}