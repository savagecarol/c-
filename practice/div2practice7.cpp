/* code by savagecarol */
#include <bits/stdc++.h>
using namespace std;

/* predefined value */
#define yes() cout << "YES" 
#define no() cout << "NO"
#define one() cout << "1"
#define zero() cout << "0"
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

void use(ll n)
{
       ll p = n / 2;
        if(n%2!=0)
    {   
        cout << 1 << " " << n / 2 << " " << n / 2 ;
    }
    else
    {
        if(p%2==0)
        {
            cout << p  << " " << p /2 <<  " " << p /2;
        }
        else 
        {
            p = p -1 ;
            cout << p << " " << p << " " << (n - 2*p);
        }
    }
}

void solve()
{
    ll n  , k;
    cin >> n >> k;
    while(k > 3)
    {
        cout << 1 << " ";
        k--;
        n = n -1;
    }
    use(n);
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