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
bool isPowerOfTwo (ll x) 
{ 
    return x && (!(x&(x-1))); 
} 
 


void solve()
{

    ll n;
    cin >> n;

    ll arr[n];
    for( ll i=0; i < n ; i++)
    cin >> arr[i] ;

    ll count = 0 ;
    for(int i=0 ; i <n -1 ;  i++) 
    {
        ll p =max(arr[i] , arr[i+1]);
        ll q =min(arr[i] , arr[i+1] );
        if(float(p)/float (q) > 2)
            {
                
                 while( q < p )
                    {
                        count++;
                        q = q * 2;
                    }
                    count--;
            }
    }
    if(count == 0)
        {
            cout << count ;
             return ;
         }
    cout << count;
}


int main() 
{
	
	int t;
	cin>> t;
	while(t--)
	{
	    
	   solve();
       cout<<endl;
	}

	return 0;
}