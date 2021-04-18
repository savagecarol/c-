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
    ll n ;
    cin >> n;
    ll a[n];
    inp(i , n , a);
    ll dp[n] = {0};
    ll k = 0;
    bool var = true;
    ll i = 0;
    for( i = 0 ; i < n-1 ;i++)
    {
        if(a[i] > 0)
        {
            if(dp[k] == 0)
            {
                dp[k] = a[i];
            }
            else
            {
                dp[k] = max(dp[k] , a[i]);
            }

            if(a[i+1]<0)
            {
                k++;
            }
        } 

        if(a[i] < 0)
        {
            if(dp[k] == 0)
            {
                dp[k] = a[i];
            }
            else
            {
                dp[k] = max(dp[k] , a[i]);
            }

             if(a[i+1]>0)
                {
                    k++;
                }
        }
    }

        if(dp[k] == 0)
            {
                 dp[k] = a[i];   
            }
        else
            {
                dp[k] =max(dp[k] , a[i]);
            }
    
    ll sum = 0;
    loop(i , n)
    {   
    sum = sum + dp[i];
    }
        cout << sum;
}

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
	solve();cout << endl;
    }
	return 0;
}