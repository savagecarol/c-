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
    
    ll n;
    ll k ;
    cin >> n >> k;
    ll i=1;
    if(n%2 == 0)
    {
        if(k >= n/2 )
            {
                cout << -1;
                return;
            }
    }
    else
    {
        if(k > n/2 )
        {
            cout << -1;
            return;
        }
    }
    
    while(i<=n)
    {
        if(k>0)
        {
            cout << i << " ";
            cout << n << " ";
            i++;
            n--;
            k--;
        }
       else
       {
           cout << i << " ";
           i++;
       } 
    }
}
    

int main() {
    ll t;
    cin >> t;
    for(ll i =1 ; i <=t; i++)
         {
            solve();
            cout << endl;
        }
    return 0 ;
}