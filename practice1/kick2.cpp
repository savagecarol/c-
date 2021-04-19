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

ll prog(ll arr[] , ll n)
{

  long long sum=abs(arr[1]-arr[0]);
        long long c=1,res=1,k;
        for(int i=1;i<n-1;i++)
        {
            long long k=abs(arr[i+1]-arr[i]);
            if(sum==k)
               {
                   c++;
                res=max(c,res);
               }
            else
                {
                    sum=k;
                    c=1;
                }
        }

    return res +1 ;
}

void solve(ll t)
{
    ll n;
    cin >> n;
    ll a[n];
    inp(i , n , a);
    ll dp[n-1];
    cout << "Case #"<<t<<": ";
    ll c[n];

    for(ll i = 0 ; i < n;i++)
    {
        c[i] = a[i];
    }

    ll value = prog(a , n);

    if( value == n-1)
    {
        cout << n;
        return;
    }
    
    for(ll i = 0 ; i < n-1 ;i++)
    {
        dp[i] = abs(a[i+1] - a[i]);
    }

    ll cd = 0;
    for(ll i = 0 ; i < n-1;i++)
    {
        if(dp[i]!=dp[i+1])
        {
            ll k = c[i+1];
            c[i+1] = k + dp[i+1];
            value = max(prog(c , n) , value);
            c[i+1] = k - dp[i+1];
            value = max(prog(c , n) , value);
            c[i+2] = k + dp[i+1];
            value = max(prog(c , n) , value);
            c[i+2] = k - dp[i+1];
        }
    }
}
int main()
{
    ll t;
    cin >> t;
    for(ll i =1 ; i <=t;i++)
    {
	    solve(i);
        cout << endl;
    }
	return 0;
}