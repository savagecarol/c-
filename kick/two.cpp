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

/* loops */
#define inp(i,n,arr) for(int i=0 ; i<n ; i++) cin >> arr[i]
#define out(i,n,arr) for(int i=0 ; i<n ; i++) cout << arr[i] << " "
#define loop(i,n) for(int i=0;i<n;i++)

/* typedef */
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;



void solve(ll i)
{
    ll n;
    cin >> n;
    int a[n];
    for(int i = 0 ; i < n; i++)
    {
        cin >> a[i];
    }

    vector<int> dp;
    for(int i = 0 ; i < n; i++)
    {
        dp[i] = a[i];
        for(int j = i+1 ; j < n ; j++)
        {
            dp[j] = z 
        }
    }
}

int main() {
    ll t;
    cin >> t;
    for(ll i =1 ; i <=t; i++)
         {
            solve(i);
            cout << endl;
        }
    return 0 ;
}


