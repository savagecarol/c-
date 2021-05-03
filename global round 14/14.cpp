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
   string s;
   cin >> s;
   ll n = s.length();
    int x=-1,y=-1,z=-1;
    int res = INT_MAX;
   for(int i = 0 ; i < n;i++)
   {
       if(s[i]=='1')x=i;
       if(s[i]=='2')y=i;
       if(s[i]=='3')z=i;
       if(x!=-1 && y!=-1 && z!=-1)
        {
            int a = max(max(x, y) , z);
            int b = min(min(x, y) , z);
            int ans = (a-b+1);
            res = min(res , ans);
        }
   }
   if(res == INT_MAX)
    cout << 0;
    else
   cout << res;
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
	return 0;
}
