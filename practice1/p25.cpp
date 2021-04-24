/* code by savagecarol */
#include <bits/stdc++.h>
using namespace std;
 
/* predefined value */
#define yes() cout << "YES" 
#define no() cout << "NO"
#define one() cout << "1"
#define zero() cout << "0"
#define ll long long int
#define intt long long
#define mp make_pair
#define fi first
#define se second
#define pb push_back
 
/* loops */
#define inp(i,n,arr) for(int i=0 ; i<n ; i++) cin >> arr[i]
#define out(i,n,arr) for(int i=0 ; i<n ; i++) cout << arr[i] << " "
#define loop(i,n) for(int i=0;i<n;i++)
 
#define mod 1000000007
 
 
/* typedef */
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
 
/* code */ 
void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    inp(i , n , a);
    ll b[n];
    ll c[n];

    ll x= 0, y =0 ;
    loop(i , n)
    {
        b[i] = a[i]%2;
        c[i]= i%2;
        if(b[i] == 1)
            {
                x++;
            }
            if(c[i]==1)
            {
            x--;
            }

            if(b[i] == 0)
            {
                y++;
            }
            if(c[i]==0)
            {
               y--;
            }
    }

    if(x==0 && y==0)
    {
        ll count = 0;
        loop(i , n)
        {
            if(b[i] == 1 && c[i]!=1)
                {
                    count++;
                }
        }
        cout << count;
    }

    else
    {
        cout << -1;
    }



   
}
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
	solve();
    cout << endl;
    }
	return 0;
}