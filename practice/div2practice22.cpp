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
int fD(long n, int base)
{
    int dig = (int)(floor( log(n) /
                         log(base)) + 1);
    return dig;
}

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

    int lmax = 10 - maxx;
    ll k = v.size();
    

    while(m>0)
    {
        if(m<lmax)
        {
            lmax = m;
        }

        ll p = 0;
        ll pro = 0;
        for( ll i = 0 ; i < k ; i++)
        {
            v[i] = v[i]+lmax;
            if(v[i] == 10)
            {
                v[i] = 1;
                v.push_back(0);
                p++;
            }


            if(pro <= v[i])
            {
                pro = v[i];
            }
        
        }
            m=m-lmax;
            lmax =10 - pro;
            k = (k + p);

    }

    cout << v.size() % 1000000007;
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