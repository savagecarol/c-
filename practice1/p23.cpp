/* code by savagecarol */
#include <bits/stdc++.h>
using namespace std;
 
/* predefined value */
#define yes() cout << "YES" 
#define no() cout << "NO"
#define one() cout << "1"
#define zero() cout << "0"
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
 
 
/* typedef */
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;


 
/* code */ 
void solve()
{
    ll n;
    cin >> n;
    vector<string> a;
    string r;
     for(ll i = 0 ; i < n;i++)
    {   cin>> r;
         a.push_back(r);
    }
    for(ll i = 0 ; i < n-1;i++)
    {
        for(ll j = 0 ; j < n-1 ;j++)
        {
            if(a[i][j] == '1' )
            {
                if(a[i][j+1] != '1' && a[i+1][j] != '1')
                {
                    no();
                    return;
                }
            }
        }
    }
    yes();
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