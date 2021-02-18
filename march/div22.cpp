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
 



/* code */
void solve()
{

    ll n;
    cin >> n;
    ll arr[n];
    for(ll i=0; i < n; i++)
        cin >> arr[i] ;
    
    ll remain = 0;
    for(ll i = 0 ; i < n; i++)
    {
        if(arr[i] == i)
            continue;
        
        else if(arr[i] > i)
            {
                remain+= arr[i] - i;
                arr[i] = i;
            }    
        else    
         {   
                ll value = i - arr[i];
                if(value<=remain)
                {
                    arr[i] = i;
                    remain = remain - value;
                }
                else
                {
                    no();
                    return ;
                }
         }
    }  
    yes();
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

