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

void solve()
    {
        ll n;
        cin >> n;
        int r = n/2020;
        int x = n%2020;
        if(x > r) no();
        else    yes();
    }
int main()
{
  int t;
  cin>> t;
  while(t--)
 { 
       solve();
       cout << endl;
 }
    return 0 ;
}
  