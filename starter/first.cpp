/* code by savagecarol */
#include <bits/stdc++.h>
using namespace std;

/* predefined value */
#define yes() cout << "Yes" 
#define no() cout << "No"
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
    int n;
    cin >> n;
    int m;
    cin >> m;    int a[n];
    unordered_set<int> p;
    for(int i = 0 ; i < n; i++)
    {
        cin >> a[i];
        p.insert(a[i]);
    }
    if(p.size() < m)
    yes();
    else
    no();
}
int main() {	
    int t;
    cin >> t;
    for(int i = 0 ; i <=t ;i++)
	   {solve();
       cout<<endl;}
	return 0;
}
