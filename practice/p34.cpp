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

void solve()
    {
        ll n;
        cin>> n;
        ll a[n];

        for(int i = 0 ; i <n ;i++)
        {
            cin >> a[i];
        }
        sort(a , a + n);
        bool r[n];
        ll res = 0;

    
        int k = 0, l = 0;
        int value1 = -1;
        int value2 = -1;
        for(int i = 0 ; i < n ;i++)
        {
   
            if(i-1 >=0 )
            {
                k =  a[i] - a[i-1] ;
            }
            if(i+1 <n )
            {
                l =  a[i+1] - a[i] ;
            }
            if(k > l)
                {
                    value1 = i+1;
                }
            else
                {
                    value2 = i-1;
                }
        }
    }

int main()
{
    ll t;
    t=1;
    while(t--)
     {
        solve();
        cout << endl;
     }
    return 0;
}