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
bool isPrime(int n)
{

    if (n <= 1)
        return false;

    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
 
    return true;
}
 


void solve()
{
    ll a , b , c ;
    cin >> a >> b >> c;
    ll d[10] = { 0 , 1 , 10 , 100 , 1000 , 10000 , 100000 , 1000000 , 10000000 , 100000000};
    if(b>a)
    cout << d[a] << " " <<  d[b]+d[c];
    else
    cout << d[a]+d[c] << " " <<  d[b];
}
    
int main() {
    ll t;
    cin >> t;
    while(t--)
    {
        solve();
            cout << endl;
    }
        return 0 ;
}