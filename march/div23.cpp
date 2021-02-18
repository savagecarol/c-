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


bool isPowerOfTwo (ll x) 
{ 
    return x && (!(x&(x-1))); 
}

void solve()
{

    ll n ;
    ll k ;
    cin >> n; 
    cin >> k ;
    vector<ll> arr(n);
    set< ll > s;
    set<ll> loc;
    for(ll i = 0 ; i < n ; i++)
        {
            cin >> arr[i] ;
            s.insert(arr[i]);
            s.insert(i);
        }
  


    for(ll i = 0 ; i < (n-k)-1 ; i++ )
    {
        for( ll j = n-1 ; j >= i + k  ; j-- )
        {
            


        }
    
    } 
}
 
int main() {


	   solve();
       cout << endl;
	
}

