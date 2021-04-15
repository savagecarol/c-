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


void coprime(ll a, ll b) {
      
    if ( __gcd(a, b) == 1)
            yes(); 
    else
            no();      
}
void solve()
{
   ll n, i, j;
   cin >> n;
   ll a[n];
   inp(i , n , a);
   sort(a , a + n);
    ll k = 1;
    ll l = 0;
    ll minn = 0;
    for(i = 1 ; i < n;i++)
    {
        if(a[i] - a[i-1] >= minn)
            {
                minn = a[i] - a[i-1];
                k= i;
            }
    }

 l = k-1;
vector<ll> c;
vector<ll> d;


loop(i , n)
{
    if(i!=k)
        {
        c.push_back(a[i]);
        }

    if(i!=l)
    {
        d.push_back(a[i]);
    }
}


 i = 1;
ll c1 = 0;
 j = 1;
ll c2 = 0;

while(i < n-1)
{
    c1 = c1 + abs(c[i] - c[i-1]);
    i++;
}

while(j < n-1)
{
    c2 = c2 + abs(d[j] - d[j-1]);
    j++;
}


if(c1 < c2)
{
    cout << a[k] << " " << c1;
}
else
{
    cout << a[l] << " " << c2;
}


}

int main()
{
    int t;
    cin >> t;
    while(t--)
        {
        solve();
        cout << endl;
        }
    return 0 ;
}