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

ll nextPowerOf2(ll n)  
{  
    ll p = 1;  
    if (n && !(n & (n - 1)))  
        return n;  
    while (p < n)  
       {
            p <<= 1;
       }      
    return p;  
}


/* code */
void solve()
{
    ll c ;
    cin >> c ;
    ll r = nextPowerOf2(c);
    ll product = 0 ;
    for(ll i = 0; i < r ; i++)
    {
        for(ll j = i+1 ;j<r;j++)
        {
            ll k = i^j;
            if(k == c)
                {
                    cout << i << " " << j << " "<< i*j <<  endl ;
                product = max(product , i*j);
                }
        
        }
    }
    cout << product << endl ;
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