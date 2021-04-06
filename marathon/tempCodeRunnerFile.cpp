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


void solve()
{
    ll n;
    cin >> n;
    int a[n];
    int b[n];
    vector<int> c;
    for(int i = 0 ; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b , b+n);
    bool p = 0;
    for(int i = 0 ; i <n ;i++)
    {
        if(a[i] != b[i])
            {
            p=1;
            break;
            }
    }

    if(p==0)
        {
            yes();
            cout << endl << 0;
            return;
        }


    int minn = 0;
    for(int i = 1 ; i < n;i++)
    {
        if(a[minn] > a[i])
        {
            minn = i;
        }
    }

    for(int i = minn; i < n ;i++)
    {
        c.push_back(a[i]);   
    }
    for(int i = 0 ; i < minn ;i++)
    {
        c.push_back(a[i]);
    }

    for(int i = 0 ; i < n ; i++)
    {
        if(c[i]!=b[i])
        {
            no();
            return;
        }
    }

    yes();
    cout << endl << 1;
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
        return 0 ;
}