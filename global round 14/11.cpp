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
    ll n , m , w;
    cin >> n >> m >> w;
    ll a[n];
    inp(i , n , a);
    vector<pair<ll , ll>>b;
    for(ll i = 0 ; i < n;i++) b.push_back({a[i] , i});
    sort(b.rbegin(), b.rend());
    int ans[n];
    for(int i = 0 ; i < n;i++) ans[i] = 0;

    int j = 0;
    for(int i = 0 ; i < n;i++)
    {
        if(j==m)
            j=0;
        ans[b[i].second] = j+1;
        j++;

    }
    yes();
    cout << endl;
    out(i , n , ans);
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









