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

    ll n  , k ;
    char s[100];

/* code */
void solve()
{

    cin >> n >> k ;
    for(ll i = 0 ; i < n ; i++ )
        cin >> s[i];

    char a[26] = {-1};

    for(ll i = 0 ; i < n;i++ )
    {
        a[s[i]-'a']++; 
    }

    ll r = 2*k + 1;
    ll p = 0;
    for(ll i = 0 ; i < 26 ; i++ )
    {
        if(a[i] == -1)
        {
            continue;
       }
       else if(a[i]%2 == 0 )
        {
            p = p + a[i];
        }
    }
    

      if(p >= r)
            yes();
        else    
            no();

}

int main() {
	ll t;
    cin>>t;
    while(t--)
	{ 
	   solve();
       cout << endl;
    }
    return 0 ;
}