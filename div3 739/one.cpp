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


int main() {
    ll t;
    cin >> t;
    for(ll i =1 ; i <=t; i++)
        {
            ll a ,b,c;
            cin >> a >> b >> c;
            if(a>b) swap(a , b);
            int diff = b-a;
            int p = 1+diff;
            int ans1 = c-diff;
            int ans2 = c+diff;
             
            
        }
    return 0 ;
}