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
  ll n , m;
  cin >> n >> m;
  ll a[n];
  ll b[m];
  for(ll i = 0 ; i < n ; i++)
  {
      cin >> a[i];
  }
  for(ll i = 0 ; i < m ; i++)
  {
      cin >> b[i];
  }




   vector<ll> k; 
  for(ll i = 0 ; i < n-1 ;i++)
  {
         ll count = 0;
      for(ll j = i+1;j<n;j++)
        {   
            k.push_back(a[i] * a[j]);
        }
  }


  for(ll i = 0 ; i < m;i++)
  {   
      ll count = 0;
        for(auto p : k)
        {
            if(p%b[i] == 0)
                {
                    count++;
                }
        }
        cout << count << " ";
  }

}
int main()
{
    int t;
    cin >> t;
    while(t--)
        {
        solve();
        cout << endl;
        }
    return 0 ;
}