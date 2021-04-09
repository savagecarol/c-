/* code by savagecarol */
#include <bits/stdc++.h>
using namespace std;

/* predefined value */
#define yes() cout << "YES" 
#define no() cout << "NO"
#define one() cout << "1"
#define zero() cout << "0"
#define ll long long int
#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define MAX 10000000

/* loops */
#define inp(i,n,arr) for(int i=0 ; i<n ; i++) cin >> arr[i]
#define out(i,n,arr) for(int i=0 ; i<n ; i++) cout << arr[i] << " "
#define loop(i,n) for(int i=0;i<n;i++)

/* typedef */
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;



void solve()
{

ll a[MAX];
ll b[MAX];
ll dp[MAX +2];
ll dp1[MAX + 2];

    string s;
    cin >> s;
    ll n = s.length();
    ll pos = -1;

    for(ll i = 0 ; i < n; i++)
    {
        if(s[i] == '0')
        {
        for(ll j = pos+1; j <=i ;j++)
            {
                a[j] = i;
            }
            pos = i;
        }         
    }

    for(ll i = pos+1; i < n ; i++)
    {
        a[i] = n;
    }

    if(a[0]==n)
    {
        zero();
        return;
    }
    pos = -1;
    for(ll i = 0 ; i < n; i++)
    {
        if(s[i] == '1')
        {
        for(ll j = pos+1; j <=i ;j++)
            {
                b[j] = i;
            }
            pos = i;
        }         
    }
    for(ll i = pos+1; i < n ; i++)
    {
        b[i] = n;
    }
    dp[n] = 0 ;
    dp[n+1] = 0;
    dp1[n] = 0;
    dp1[n+1]= 0;
    for(ll i = n-1 ; i >=0 ;i--)
    {
        dp[i] = dp[i+1];
        if(s[i]=='0' && b[i] < n)
            {
                dp[i] = max(dp[i] , dp[b[i]+1]+1);
            }
        if(s[i]=='1' && a[i] < n)
            {
                dp[i] = max(dp[i] , dp[a[i]+1]+1);
            }
        dp1[i] = dp1[i+1];
        if(b[i]<n)
        {
            dp1[i] = max(dp1[i] , dp[b[i]+1]+1);
        }
    }
    ll x = dp1[0] + 1;
    ll count = b[0]+1;
    string ans = "1";
    for(int i = 1; i <x;i++)
    {
        if(count >=n)
            {
                ans.push_back('0');
                continue;
            }
            if(a[count] >=n)
                {
                    ans.push_back('0');
                    count = a[count] +1;
                    continue;
                }
            
                if(dp[a[count]+1] <x-i-1)
                {
                    ans.push_back('0');
                    count = a[count] +1;
                }
                else
                {
                    ans.push_back('1');
                    count = b[count] +1; 
                }
    }
    cout << ans;
}
int main() {
    ll t;
    cin >> t;
    for(ll i =1 ; i <=t; i++)
         {
            solve();
            cout << endl;
        }
    return 0 ;
}


