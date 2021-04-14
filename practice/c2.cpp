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
  
  int a , b;
  cin >> a >> b;
  int count = 0;
  while(a!=0 || b!=0)
  {
      if(b>a)
        {
            b = b-a;
            count++;

        }
    else if(a>b)
    {
            a= a-b;
            count++;
    }
    else 
    {
        count++;
        break;
    }
  }
  cout << count;
}
int main() {
    ll t;
    cin >> t;
    while(t--)
    {
        solve();
        cout << endl;
    }
        return 0 ;
}