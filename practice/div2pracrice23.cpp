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

    ll n , m;
    cin >> n >> m;
    vector<ll> v;

    int maxx = 0;

    while(n>0)
    {
        ll x = n%10;
        v.push_back(x);
        if(x>=maxx)
            {
                maxx = x;
            }
        n = n/10;
    }

    ll lmaxx = 10 - maxx;
    ll count = 0;
    for(int i = 0 ; i < v.size() ; i++)
    {
        if(v[i] == maxx)
            {   
                 count++;
            }
    }
    if(m==0)
        {
            cout << v.size()%10000000007;
        }
    else
    {
        ll res = v.size();
        while(m > 0)
        {
            res = res + count;
            
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