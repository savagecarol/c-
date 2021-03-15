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
void solve(ll d)
    {
        ll n  , m;
        cin >> n >> m;
        ll count = 0;
        for(ll i = n ; i <= m ; i++)
        {
            ll k = i;
            ll p = floor(log10(i) + 1);
            while(p>0)
            {
               int x = k %10;
                k = k /10;
                if((p%2  == 0 && x%2==0)||(p%2!=0 && x%2!=0))
                {
                    p--;   
                }
                else
                {
                    break;
                }
            }
            if(p==0)
                count++;
        }
        cout << "Case #"<<d<< ": "<< count << endl;
    } 
int main() {
    ll t;
    cin >> t;
    for(ll i =1 ; i <=t; i++)
        {
            solve(i);
        }
    return 0 ;
}