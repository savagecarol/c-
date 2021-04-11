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

float s(float var)
{
    float value = (int)(var * 100 + .5);
    return (float)value / 100;
}

void solve()
{
    ll n;
    cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a[i];
    }
    for(int i = 1 ; i < n-1;i++)
    {
        if(a[i]!=a[i-1] || a[i]!=a[i+1])
            {
                if(a[i]==a[i+1])
                    {
                        cout << i;
                        return;
                    }
                if(a[i]==a[i-1])
                    {
                        cout << i+2;
                        return;
                    } 
                if(a[i]!=a[i-1] && a[i]!=a[i+1])
                {
                    cout << i+1;
                    return;
                }

            }
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