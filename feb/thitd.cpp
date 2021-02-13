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

/* typedef */
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;



/* code */
void solve()
{
    ll x , y;
    cin>> x >> y;
    ll count = 0;
    for(int i=1;i<=x;i++)
    {
        for(int j = 1 ; j <= y ; j++)
            {
                if ((i/j) == (i%j))
                  {
                      cout << i << " " << j << endl;
                        count++;
                  }
            }
    }

    cout << count << endl;
}

int main() 
{
    ll t;
    cin >> t;
    while(t--)
        solve();

	return 0;
}
