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
  
  ll n, k;
  cin >> n >> k;
  string s;
  cin >> s;

    if(n<=k)
        {
            loop(i , n)
            {
                if(s[i] == '1')
                    {
                        cout << '0';
                        return;
                    }
            }
            cout << 1;
            return;
        }

    for(int i = 0 ; i < n;i++)
    {
        ll j = i-1;
        ll t = k;
        while(t>0 && j>=0)
            {
                



            }
    
    }

    ll count = 0;
   cout << count;
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