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


ll rec(ll a , ll b)
{
    ll c = 0;
    if(b == 1)
       { c= c+1;
        b = b+1;
       }
    ll l =0;
    ll ans = 1000000007;

    while(1)
    {
        ll e = 0;
        ll t = a;
        while(t > 0)
            {
                t = t / b;
                e = e+1;
            }
        if(ans < e+l)
             break;
        else
            ans = e+l;
        b=b+1;
        l=l+1;
    }
    return ans + c;
}

/* code */
void solve()
{

    ll a , b ;
    cin >> a; 
    cin >> b;
    cout << rec(a , b);
    
}

int main() 
{

    ll t;
	cin>>t;
	while(t--)
	{
        solve();
	  cout<< endl;
	}
	return 0;
}





